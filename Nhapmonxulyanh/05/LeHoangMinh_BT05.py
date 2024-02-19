#!/usr/bin/env python
# coding: utf-8

# In[1]:


import cv2
import numpy as np
from matplotlib import pyplot as plt


# In[2]:


# Câu 1
img = cv2.imread('cat.jpg')
cv2.imshow('Original Image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[3]:


# Câu 2
height, width = img.shape[:2]
print(f"Chiều cao: {height}, Chiều rộng: {width}")


# In[4]:


# Câu 3
new_size = (256, 256)
img_resized = cv2.resize(img, new_size)
cv2.imshow('Resized Image', img_resized)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[5]:


# Câu 4
img_hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
s_channel = img_hsv[:, :, 1]
cv2.imshow('S Channel', s_channel)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[6]:


# Câu 5
v_channel = img_hsv[:, :, 2]
blurred_v_channel = cv2.GaussianBlur(v_channel, (5, 5), 0)
img_smoothed = np.copy(img_hsv)
img_smoothed[:, :, 2] = blurred_v_channel
img_smoothed_rgb = cv2.cvtColor(img_smoothed, cv2.COLOR_HSV2BGR)
cv2.imshow('Smoothed Image', img_smoothed_rgb)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[ ]:




