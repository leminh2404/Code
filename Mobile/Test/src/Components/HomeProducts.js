import React from 'react'
import { Flex, Heading, Image, ScrollView, Text, Box } from 'native-base';
import { ImageBackground, Pressable } from 'react-native';
import Colors from '../color';
import products from '../data/Products';
import Rating from './Rating';

function HomeProducts() {
    return (
        <ScrollView style={{ flex: 1, borderWidth: 1, padding: 10 }}>
            <Flex
                flexWrap="wrap"
                direction="row"
                justifyContent="space-between"
                style={{ flex: 1, gap: 10 }}
                px={6}>
                {
                    products.map((product) => (
                        <Pressable
                            key={product._id}
                            bg={Colors.white}
                            style={{ width: '45%', paddingBottom: 10 }}
                            borderWidth={1}
                            borderColor="black"
                            backgroundColor="yellow"
                            overflow="hidden">
                            <Image
                                source={{ uri: product.Image }}
                                alt={product.name}
                                w="full"
                                h={24}
                                resizeMode="contain"
                                borderWidth={1}
                                borderColor="black"
                                bgColor={Colors.deepGray} />

                            <Box px={4} pt={1}>
                                <Heading size="sm" bold>
                                    ${product.price}
                                </Heading>
                                <Text
                                    fontSize={10}
                                    mt={1} isTruncated
                                    w="full">
                                    {product.name}
                                </Text>
                                {/*rating */}
                                <Rating value={product.rating} />
                            </Box>

                        </Pressable>
                    ))
                }
            </Flex>
        </ScrollView>
    );
}

export default HomeProducts;

