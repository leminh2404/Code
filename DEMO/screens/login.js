import React, { useState } from 'react';
import { View, TextInput, Text, StyleSheet, TouchableOpacity } from 'react-native'
import { SafeAreaView } from 'react-native-safe-area-context';
const Login = ({ navigation }) => {
    const [username, setUsername] = useState("");
    const [password, setPassword] = useState("");
    const onHandleLogin = () => {
        if (username == "" || password == "") {
            alert("Không được để trống!");
            return;
        }
        if (username === "admin" || password === "12345") {
            navigation.navigate('Homee', { id: username });
        }
        else {
            alert("Tài khoản hoặc mật khẩu không đúng!");
        }
    }
    return (
        <SafeAreaView style={styles.body}>
            <View style={styles.container}>
                <TextInput style={styles.input}
                    placeholder="Nhập tà khoảnn..."
                    value={username}
                    onChangeText={(text) => setUsername(text)} />
                <TextInput style={styles.input}
                    textContentType='password'
                    placeholder="Nhập mật khẩu..."
                    value={password}
                    onChangeText={(text) => setPassword(text)} />
                <TouchableOpacity style={styles.btnDangnhap} onPress={onHandleLogin}>
                    <Text style={{ color: '#ffffff' }}>Đăng nhập</Text>
                </TouchableOpacity>
            </View>
        </SafeAreaView>
    )
}
export default Login;
const styles = StyleSheet.create({
    body: {
        flex: 1,
        justifyContent: 'center',
        alignItems: 'center'
    },
    container: {
        display: 'flex',
        width: '80%',
        height: '50%',
        borderWidth: 1,
        backgroundColor: '#f5f5f5',
        justifyContent: 'center',
        alignItems: 'center',
        gap: 20
    },
    input: {
        width: '90%',
        height: 50,
        borderWidth: 1,
        borderRadius: 10,
        paddingHorizontal: 15
    },
    btnDangnhap: {
        width: '50%',
        height: 50,
        backgroundColor: 'gray',
        display: 'flex',
        justifyContent: 'center',
        alignItems: 'center',
        borderRadius: 20
    }
})