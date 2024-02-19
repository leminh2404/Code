import sys
print(sys.version)
from google.colab import drive
drive.mount('/content/drive')

#**1a (2đ). Đọc vào file user_data.csv được biến dataframe df. Hiển thị df.**

import pandas as pd
df = pd.read_csv("/content/drive/MyDrive/ML/data/User_Data.csv")
print(df)

#**1b (2đ). Sử dụng pháp chuyển đổi Label encoding, tạo cột mới Gender_number của df để chuyển cột Gender gía trị chữ thành giá trị số. Hiển thị df.**

from sklearn.preprocessing import LabelEncoder
df["Gender_number"] = LabelEncoder().fit_transform(df["Gender"])
print(df)

#**1c(2đ). Từ dataframe df, trích chọn dataframe X gồm các cột Gender_numer, Age, EstimatedSalary, giá trị nhãn y là cột Purchased, hiển thị X, y.**

X= df[['Gender_number', 'Age', 'EstimatedSalary']]
y= df['Purchased']
print(X)
print("\n")
print(y)

#**1d (1đ). Chia ngẫu nhiên X,y thành X_train,y_train và X_test,y_test theo tỉ lệ 80:20. Hiển thị X_test,y_test.**

from sklearn.model_selection import train_test_split
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size = 0.2, random_state = 0)

print(X_test, y_test)

#**1e (2đ). Sử dụng một trong các kỹ thuật phân lớp nhị phân sau:
# Logistics Regression, SVM, Adaboost để huấn luyện mô hình học máy với tập dữ liệu X_train,y_train.**

#**1g (1đ). Dự báo kết quả và đánh giá độ chính xác dự báo trên tập X_test,y_test.**

#**SVM**

#Create the SVM model
from sklearn.svm import SVC
classifier = SVC(kernel = 'linear', random_state = 0)
#Fit the model for the data

classifier.fit(X_train,y_train)

#Make the prediction
y_pred = classifier.predict(X_test)

from sklearn.metrics import confusion_matrix
cm = confusion_matrix(y_test, y_pred)
print(cm)

from sklearn.model_selection import cross_val_score
accuracies = cross_val_score(estimator = classifier, X = X_test, y = y_test, cv = 10)
print("Accuracy: {:.2f} %".format(accuracies.mean()*100))

#**Logistics Regression**

from sklearn.preprocessing import StandardScaler
sc = StandardScaler()
X_train = sc.fit_transform(X_train)
X_test = sc.transform(X_test)

from sklearn.linear_model import LogisticRegression
classifier = LogisticRegression(random_state = 0, solver='lbfgs', multi_class='auto')
classifier.fit(X_train, y_train)

from sklearn.model_selection import cross_val_score
accuracies = cross_val_score(estimator = classifier, X = X_train, y = y_train, cv = 10)
print("LR: {:.2f} %".format(accuracies.mean()*100))

#**AdaBoost**

# Load libraries
from sklearn.ensemble import AdaBoostClassifier
from sklearn import datasets
# Import train_test_split function
from sklearn.model_selection import train_test_split
#Import scikit-learn metrics module for accuracy calculation
from sklearn import metrics

# Create adaboost classifer object
abc = AdaBoostClassifier(n_estimators=50,
                         learning_rate=1)
# Train Adaboost Classifer
model = abc.fit(X_train, y_train)

#Predict the response for test dataset
y_pred = model.predict(X_test)

# Model Accuracy, how often is the classifier correct?
print("Accuracy:",metrics.accuracy_score(y_pred, y_test))
