import React from "react";
import { Box,Heading,Image,Input,Text,VStack ,Button} from "native-base";
import { MaterialIcons,FontAwesome,Ionicons } from '@expo/vector-icons';
import { Pressable } from "react-native";
import Colors from "../color";

function RegisterScreen(){
    return(
        <Box flex={1} bg={Colors.black}>
            <Image 
                flex={1} 
                alt="Logo"
                resizeMode="cover"
                size="lg"
                w="full"
                source={require("../../assets/cover.png")}
            />
            <Box
                w="full"
                h="full"
                position="absolute"
                top="0"
                px="6"
                justifyContent="center"
            >
                <Heading>SIGN UP</Heading>
                <VStack space={8} pt="6">
                    {/* USERNAME */}
                    <Input
                        InputLeftElement={                  
                            <FontAwesome name="user" size={20} color={Colors.main} />
                        }
                            variant="underlined"
                            placeholder="Trịnh Phương Linh"
                            w="70%"
                            type="text"
                            pl={2}
                            color={Colors.main}
                            borderBottomColor={Colors.underline}
                        />
                    {/* PASSWORD */}
                        <Input
                        InputLeftElement={
                            
                            <MaterialIcons name="email" size={20} color={Colors.main} />
                        }
                            variant="underlined"
                            placeholder="user@gmail.com"
                            w="70%"
                            type="password"
                            pl={2}
                            color={Colors.main}
                            borderBottomColor={Colors.underline}
                        />
                        {/* PASSWORD */}
                        <Input
                        InputLeftElement={
                            <Ionicons name="eye" size={20} color={Colors.main} />
                            
                        }
                            variant="underlined"
                            placeholder="*****************"
                            w="70%"
                            type="password"
                            pl={2}
                            color={Colors.main}
                            borderBottomColor={Colors.underline}
                        />
                </VStack>

                <Button 
                    _pressed={{
                        bg:Colors.main,
                    }}
                    my={30}
                    w="40%"
                    rounded={50}
                    bg={Colors.main}
                >
                    SIGN UP
                </Button>
                <Pressable mt={4}>
                    <Text color={Colors.deepestGray} size="sm">
                        LOGIN
                    </Text>
                </Pressable>

            </Box>
            
        </Box>    
    );
}

export default RegisterScreen;