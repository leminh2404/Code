#!/usr/bin/env python
# coding: utf-8

# In[1]:


import cv2


# In[2]:


# Đọc ảnh màu vào biến img
img = cv2.imread('cat.jpg')


# In[3]:


# Hiển thị chiều dài và chiều rộng của ảnh img
height, width = img.shape[:2]
print(f"Chiều dài: {height} pixels")
print(f"Chiều rộng: {width} pixels")


# In[4]:


cv2.imshow('Original Image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[5]:


# Tách các kênh BGR của img
blue_channel, green_channel, red_channel = cv2.split(img)


# In[6]:


# Tạo ảnh mới newimg bằng cách đảo vị trí các kênh
newimg = cv2.merge([red_channel, green_channel, blue_channel])


# In[7]:


# Chuyển sang định dạng jpg và hiển thị ảnh mới newimg
cv2.imwrite('new_image.jpg', newimg)
cv2.imshow('New Image', newimg)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[ ]:




