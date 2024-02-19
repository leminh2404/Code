#!/usr/bin/env python
# coding: utf-8

# In[4]:


import cv2
import numpy as np


# In[5]:


# Đọc ảnh từ tệp jpg
rgb_image = cv2.imread('cat.jpg')


# In[7]:


# Kiểm tra xem ảnh có tồn tại không
if rgb_image is None:
    print("Không thể đọc ảnh. Hãy đảm bảo rằng đường dẫn và tên tệp là chính xác.")
    exit()

# Hiển thị ảnh trên cửa sổ mới
cv2.imshow('Original Image', rgb_image)
cv2.waitKey(0)


# In[10]:


# Viết lên ảnh một dòng chữ "Open CV"
font = cv2.FONT_HERSHEY_SIMPLEX
cv2.putText(rgb_image, 'Open CV', (10, 50), font, 1, (255, 255, 255), 2, cv2.LINE_AA)


# In[11]:


# Hiển thị ảnh với dòng chữ
cv2.imshow('Image with Text', rgb_image)
cv2.waitKey(0)


# In[12]:


# Ghi ảnh mới ra tệp
cv2.imwrite('imagewithOPENCV-Text.jpg', rgb_image)


# In[ ]:




