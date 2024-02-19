//
// Created by arunk on 04/27/2019.
//
#include <iostream>
#include <array>
#include <utility>
#include <cmath>
#include "../include/A-Star.h"

void Maze::Spawn(std::array<std::string, 31> board) const {
    for (auto &item : board) {
        std::cout << item << std::endl;
    }
}

std::pair<int, int> Maze::North(const std::pair<int, int> node) const {
    return std::make_pair(node.first, node.second - 1);
}

std::pair<int, int> Maze::East(const std::pair<int, int> node) const {
    return std::make_pair(node.first + 1, node.second);
}

std::pair<int, int> Maze::West(const std::pair<int, int> node) const {
    return std::make_pair(node.first - 1, node.second);
}

std::pair<int, int> Maze::South(const std::pair<int, int> node) const {
    return std::make_pair(node.first, node.second + 1);
}

const double Maze::CalculateDistance(std::pair<int, int> current_node) const {
    return std::sqrt(std::pow(current_node.first - goal_.first, 2) + \
                     std::pow(current_node.second - goal_.second, 2));
}

bool Maze::IsNotObstacle(std::pair<int, int> node) const {
    if (grid_[node.second][node.first] == '#') return false;
    else return true;
}

bool Maze::IsWithinRegion(std::pair<int, int> node) const {
    if (node.first >= 0 && node.first <= 45 && node.second >= 0 && node.second <= 30) return true;
    else return false;
}

const int Maze::TakeDecision1(const std::pair<int, int> &new_node, const double &cost_g, ListInfo &info,
                              const std::pair<int, int> &parent_node) {
    if (IsWithinRegion(new_node) && IsNotObstacle(new_node)) {
        info.cost_h = CalculateDistance(new_node);
        info.cost_g = cost_g + 1;
        info.total_cost = info.cost_g + info.cost_h;
        info.node = new_node;
        info.parent = parent_node;
        priority_list_.insert(std::pair<double, ListInfo>(info.total_cost, info));
        open_list_[info.node] = info;
        if (new_node == goal_) {
            closed_list_[new_node] = info;
            return 1;
        } else return -1;
    } else return -1;
}

const int Maze::TakeDecision2(const std::pair<int, int> &new_node, const double &cost_g, ListInfo &info,
                              const std::pair<int, int> &parent_node) {
    //< If the node is already there in closed list, then skip
    if (closed_list_.find(new_node) != closed_list_.end()) {
        if (new_node == goal_) return 1;
        else return -1;
    }
        //< If the new node is already there in open and priority lists
    else if (IsWithinRegion(new_node) && IsNotObstacle(new_node)) {
        if (open_list_.find(new_node) != open_list_.end()) {
            info.cost_h = CalculateDistance(new_node);
            info.cost_g = cost_g + 1;
            info.total_cost = info.cost_g + info.cost_h;
            info.node = new_node;
            info.parent = parent_node;
            ListInfo value = open_list_.find(new_node)->second;
            if (value.cost_g > info.cost_g) {
                open_list_.find(new_node)->second.cost_g = info.cost_g;
                open_list_.find(new_node)->second.cost_h = info.cost_h;
                open_list_.find(new_node)->second.total_cost = info.total_cost;
                open_list_.find(new_node)->second.parent = info.parent;
                auto it_range = priority_list_.equal_range(value.total_cost);
                for (auto itr = it_range.first; itr != it_range.second; ++itr) {
                    if (itr->second.node == new_node) {
                        itr->second.cost_g = info.cost_g; //<- Find groups and update for unique values nodes
                        itr->second.cost_h = info.cost_h; //<- Find groups and update for unique values nodes
                        itr->second.total_cost = info.total_cost; //<- Find groups and update for unique values nodes
                        itr->second.parent = info.parent; //<- Find groups and update for unique values nodes
                        break;
                    }
                }
            }
            return -1;
        } else { // If key could not be found in open list, then do the following --
            // Note: Even though priority list does not have key, it may have the same cost f for a different key
            info.cost_h = CalculateDistance(new_node);
            info.cost_g = cost_g + 1;
            info.total_cost = info.cost_g + info.cost_h;
            info.node = new_node;
            info.parent = parent_node;
            if (new_node == goal_) {
                closed_list_[new_node] = info;
                return 1;
            } else {
                priority_list_.insert(std::pair<double, ListInfo>(info.total_cost, info));
                open_list_[info.node] = info;
                return -1;
            }
        }
    }
    return -1;
}

int Maze::Action() {
    // Initialize cost g, cost h, total cost, node no and parent no for root node
    double cost_h = -100;
    double cost_g = 0;
    std::pair<int, int> parent_node{start_};
    std::pair<int, int> current_node{start_};
    cost_h = CalculateDistance(current_node);
    ListInfo info;
    info.cost_g = cost_g;
    info.cost_h = cost_h;
    info.total_cost = cost_g + cost_h;
    info.parent = current_node;
    info.node = current_node;
    // Assume that first node was pushed and popped from priority and open lists
    // Then add it to closed list
    closed_list_[current_node] = info;
    auto north_move = North(current_node);
    const int decision_north1 =
            TakeDecision1(north_move, cost_g, info, parent_node);
    if (decision_north1 == 1) return 1;
    auto south_move = South(current_node);
    const int decision_south1 =
            TakeDecision1(south_move, cost_g, info, parent_node);
    if (decision_south1 == 1) return 1;
    auto east_move = East(current_node);
    const int decision_east1 =
            TakeDecision1(east_move, cost_g, info, parent_node);
    if (decision_east1 == 1) return 1;
    auto west_move = West(current_node);
    const int decision_west1 =
            TakeDecision1(west_move, cost_g, info, parent_node);
    if (decision_west1 == 1) return 1; // Everything fine until here
    while (true) {
        // Pop the top element from priority list  <---- If priority list empty, then break while loop
        if (priority_list_.empty() && closed_list_.find(goal_) == closed_list_.end()) {
            return -1; // Goal node not in closed list and priority list is also empty
        } else if (priority_list_.empty() && closed_list_.find(goal_) != closed_list_.end()) {
            return 1; // Goal node is found in closed list and priority list is empty
        } else {
            auto low_cost = priority_list_.begin()->first; // Lowest cost f which is first node in priority list
            auto low_cost_info = priority_list_.begin()->second;
            priority_list_.erase(priority_list_.begin());
            auto low_cost_node = low_cost_info.node;
            // Remove the same node from open list
            open_list_.erase(low_cost_node);
            closed_list_[low_cost_node] = low_cost_info;
            current_node = low_cost_node;
            parent_node = low_cost_node;
            cost_g = low_cost_info.cost_g;
            north_move = North(current_node);
            const int decision_north2 =
                    TakeDecision2(north_move, cost_g, info, parent_node);
            if (decision_north2 == 1) {
                break;
            }
            south_move = South(current_node);
            const int decision_south2 =
                    TakeDecision2(south_move, cost_g, info, parent_node);
            if (decision_south2 == 1) {
                break;
            }
            east_move = East(current_node);
            const int decision_east2 =
                    TakeDecision2(east_move, cost_g, info, parent_node);
            if (decision_east2 == 1) {
                break;
            }
            west_move = West(current_node);
            const int decision_west2 =
                    TakeDecision2(west_move, cost_g, info, parent_node);
            if (decision_west2 == 1) {
                break;
            }
        }
    }
    return 1;
}

void Maze::PlotTrajectory() {
    int status = Action();
    if (status == 1) {
        auto board = grid_;
        std::pair<int, int> node = goal_;
        std::pair<int, int> parent = closed_list_.find(node)->second.parent;
        while (parent != node) {
            if (node != goal_ || node != start_) {
                board[node.second][node.first] = '+';
            }
            node = closed_list_.find(parent)->second.node;
            parent = closed_list_.find(parent)->second.parent;
        }
        Spawn(board);
    } else { std::cout << "A path could not be found" << std::endl; }
}
