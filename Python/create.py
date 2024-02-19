import json
import random
from datetime import datetime, timedelta
import re

# Đọc file JSON
with open('D:\Code\Python\shoes.json', 'r') as file:
    data = json.load(file)

categories = ["Men", "Women", "Unisex"]
types = ["Running", "Casuals", "Sports"]
id_counter = 1
    
# Thêm thuộc tính category, type, time, popular và xóa dấu "." trong price
for item in data:
    item["favorite"] = False
    item["cart"] = False
    id_counter += 1

with open('D:\Code\Python\shoesUpdated.json', 'w') as output_file:
    json.dump(data, output_file, indent=2)

print("Dữ liệu đã được cập nhật và lưu vào shoesUpdated.json")
