from bs4 import BeautifulSoup
import requests
import json

url = "https://tushoes.vn/mlb"  
response = requests.get(url)
soup = BeautifulSoup(response.content, 'html.parser')
data = {"Nike": []}
products = []
id_counter = 68
product_elements = soup.find_all("div", class_="col-xs-6 col-sm-4 col-lg-4")

for product_element in product_elements:
    product_info = {
        "id": id_counter,
        "name": product_element.find("h3", class_="product-name").find("a").text.strip(),
        "brand": "MLB",
        "image": product_element.find("img", class_="img-pro").get("src"),
        "price": product_element.find("span", class_="price product-price").text.strip(),
    }
    products.append(product_info)
    id_counter += 1
    
data["Nike"].append({
    "category": "unisex",
    "shoes": products
})
json_data = json.dumps(products, indent=2, ensure_ascii=False)
print(json_data)
