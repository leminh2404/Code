#include "iostream"
#include "cmath"
#include "vector"
#include "set"
using namespace std;
typedef struct Node
{
    int data;
    Node *left;
    Node *right;
} node_t;

void Free(node_t *root)
{
    if (root == NULL)
        return;

    Free(root->left);
    Free(root->right);
    free(root);
}

int LeftOf(const int value, const node_t *root)
{
    // Nếu bạn muốn cây BST cho phép giá trị trùng lặp, hãy sử dụng dòng code thứ 2
    return value <= root->data;
    //    return value <= root->data;
}

int RightOf(const int value, const node_t *root)
{
    return value >= root->data;
}

node_t *Insert(node_t *root, const int value)
{
    if (root == NULL)
    {
        node_t *node = (node_t *)malloc(sizeof(node_t));
        node->left = NULL;
        node->right = NULL;
        node->data = value;
        return node;
    }
    if (LeftOf(value, root))
        root->left = Insert(root->left, value);
    else if (RightOf(value, root))
        root->right = Insert(root->right, value);
    return root;
}

int Search(const node_t *root, int value)
{
    if (root == NULL)
        return 0;
    if (root->data == value)
    {
        return root->data;
    }
    else if (LeftOf(value, root))
    {
        return Search(root->left, value);
    }
    else if (RightOf(value, root))
    {
        return Search(root->right, value);
    }
}
int LeftMostValue(const node_t *root)
{
    while (root->left != NULL)
        root = root->left;
    return root->data;
}

node_t *Delete(node_t *root, int value)
{
    if (root == NULL)
        return root;
    if (LeftOf(value, root))
        root->left = Delete(root->left, value);
    else if (RightOf(value, root))
        root->right = Delete(root->right, value);
    else
    {
        // root->data == value, delete this node
        if (root->left == NULL)
        {
            node_t *newRoot = root->right;
            free(root);
            return newRoot;
        }
        if (root->right == NULL)
        {
            node_t *newRoot = root->left;
            free(root);
            return newRoot;
        }
        root->data = LeftMostValue(root->right);
        root->right = Delete(root->right, root->data);
    }
    return root;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int m, n;
    node_t *rootVe = NULL;
    vector<int> result;
    do
    {
        cin >> m >> n;
    } while (n < 1 || m > 2 * pow(10, 5));
    int a, b, res;
    bool exit = false;
    for (int i = 0; i < m; i++)
    {
        cin >> a;
        rootVe = Insert(rootVe, a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        for (int x = b; x >= 1 ; x--)
        {
            res = Search(rootVe, x);
            if (x != 1)
            {
                if (res != 0)
                {
                    result.push_back(res);
                    goto A;
                }
            }
            else
            {
                if (res != 0)
                {
                    result.push_back(res);
                    goto A;
                }
                else
                    result.push_back(-1);
            }
            A: exit = false;
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "\n";
    }
}
/*Thành phố X tổ chức chương trình hòa nhạc. Ban tổ chức đã chuẩn bị n chỗ ngồi, mỗi chỗ ngồi sẽ có một vé được phát ra để bán cho khách với một số tiền nhất định.

Vé bắt đầu được mở bán, m khách hàng lần lượt đến. Mỗi khách hàng thông báo mức giá tối đa mà họ sẵn sàng trả cho một chiếc vé và sau đó, họ sẽ nhận được một vé với mức giá gần nhất có thể sao cho nó không vượt quá mức giá tối đa.

Vé đã bán ra cho khách hàng đến trước không thể thu hồi lại để bán cho khách hàng sau.

Yêu cầu
Viết chương trình tính giá vé mà mỗi khách hàng phải trả để lấy vé.
Dữ liệu
Dòng đầu tiên ghi hai số nguyên m, n (1<=n,m<=2∗105)
Dòng thứ hai ghi m số nguyên cách nhau một dấu cách trống là giá n vé.
Dòng thứ 3 ghi n số nguyên cách nhau một dấu cách trống là số tiền tối đa mà khách hàng chịu chi trả.
Các giá trị nhập vào là giá vé có số tiền tối đa không quá 109

Kết quả
In ra giá vé mà mỗi khách hàng sẽ trả cho vé của họ. Mỗi giá trị trên một dòng.
Nếu khách hàng không lấy được vé nào, in ra -1.
Ví dụ
input
5 3 số vé và số khách hàng chịu trả
5 3 7 8 5 giá n vé
4 8 3 số tiền tối đa mà khách hàng chịu trả
output
3
8
-1*/