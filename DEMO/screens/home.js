import React, { useState, useEffect } from 'react';
import { View, TextInput, Text, StyleSheet, TouchableOpacity } from 'react-native'
import { SafeAreaView } from 'react-native-safe-area-context';
const Home = ({ navigation, route }) => {
    const [value, setValue] = useState("");
    const param = () => {
        const { id } = route.params;
        setValue("12");
    }
    useEffect(() => {
        param();
    }, [])
    return (
        <SafeAreaView>
            <Text>Home page</Text>
            <Text>
                Gía trị truyền sang: {value}
            </Text>
        </SafeAreaView>
    )
}
export default Home;