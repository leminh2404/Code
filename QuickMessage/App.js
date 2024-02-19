import { StatusBar } from 'expo-status-bar';
import { StyleSheet, Text, View } from 'react-native';
import { createBottomTabNavigator } from '@react-navigation/bottom-tabs';
import { NavigationContainer } from '@react-navigation/native';
import * as Notifications from 'expo-notifications';
import Icon from 'react-native-vector-icons/FontAwesome5'
const Tab = createBottomTabNavigator();
import Anh from './screens/anh';
import Em from './screens/em';

Notifications.setNotificationHandler({
  handleNotification: async () => ({
    shouldShowAlert: true,
    shouldPlaySound: false,
    shouldSetBadge: false,
  }),
});

export default function App() {
  return (
    <NavigationContainer>
      <Tab.Navigator initialRouteName='Anh' screenOptions={() => ({
        tabBarActiveTintColor: '#000000',
        tabBarInactiveTintColor: '#afafaf',
        tabBarActiveBackgroundColor: '#ffffff',
        tabBarInactiveBackgroundColor: '#ffffff',
        tabBarStyle: { borderTopWidth: 0 },
        tabBarHideOnKeyboard: true,
      })}>
        <Tab.Screen name="Anh" component={Anh}
          options={() => ({
            title: 'Anh',
            tabBarStyle: { borderTopWidth: 0 },
            tabBarIcon: ({ color, size }) => (
              <Icon name="mars" size={size} color={color} />
            ),
            headerStyle: {
              backgroundColor: 'pink',
            },
            headerTintColor: '#333',
            headerTitleStyle: {
              fontWeight: 'bold',
            },
          })} />
        <Tab.Screen name="Em" component={Em}
          options={() => ({
            title: 'Em',
            tabBarStyle: { borderTopWidth: 0 },
            tabBarIcon: ({ color, size }) => (
              <Icon name="venus" size={size} color={color} />
            ), headerStyle: {
              backgroundColor: '#ff69eb',
            },
            headerTintColor: '#333',
            headerTitleStyle: {
              fontWeight: 'bold',
            },
          })} />
      </Tab.Navigator>
    </NavigationContainer>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    backgroundColor: '#fff',
    alignItems: 'center',
    justifyContent: 'center',
  },
});
