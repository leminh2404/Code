import { StatusBar } from 'expo-status-bar';
import HomeScreen from './src/Screens/HomeScreen';
import LoginScreen from './src/Screens/LoginScreen';
import { NativeBaseProvider } from 'native-base';
import RegisterScreen from './src/Screens/RegisterScreen';
import NotVerifyScreen from './src/Screens/NotVerifyScreen';

export default function App() {
  return(
    <NativeBaseProvider>
      <HomeScreen/>
    </NativeBaseProvider>
  );
}


