#!/usr/bin/env python
# coding: utf-8

# In[ ]:


import cv2


# In[ ]:


rgb_img = cv2.imread('cat.jpg', cv2.IMREAD_COLOR)


# In[ ]:


dimensions = rgb_img.shape


# In[ ]:


print(dimensions)


# In[40]:


cv2.startWindowThread()
cv2.imshow("RGB Image", rgb_img)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[ ]:


import matplotlib.pyplot as plt


# In[29]:


plt.imshow(rgb_img, cmap='gray')


# In[30]:


print("Pixel at (6,40) - Intensity: {}".format(i))


# In[31]:


i = rgb_img[1, 1]


# In[43]:


x, y = 120, 120
rgb_img[y, x] = 0


# In[44]:


cv2.imshow('Modified Image', rgb_img)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[46]:


height, width, channels = rgb_img.shape
smaller_image = cv2.resize(rgb_img, (width // 2, height // 2))


# In[48]:


print(f"Kích thước ảnh: {width}x{height}")


# In[50]:


cv2.imshow('Smaller Image', smaller_image)
cv2.waitKey(0)
cv2.destroyAllWindows()


# In[ ]:




