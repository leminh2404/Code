import { Header } from "@react-navigation/stack";
import React from "react";
import { Button, Text } from "react-native";
import * as Notifications from 'expo-notifications';
import { SafeAreaView } from "react-native-safe-area-context";

const getNotificationToken = async () => {
    const { status } = await Notifications.getPermissionsAsync();
    if (status !== 'granted') {
        const { status } = await Notifications.requestPermissionsAsync();
        if (status !== 'granted') {
            alert('Lỗi lấy notification token!');
            return;
        }
    }
    const tokenData = await Notifications.getExpoPushTokenAsync();
    const token = tokenData.data;
    console.log({ token });
    return token;
}

const Anh = () => {
    return (
        <SafeAreaView>
            <Text>Anh</Text>
            <Button title="Bấm để lấy mã số" onPress={getNotificationToken} />
        </SafeAreaView>
    )
}
export default Anh;