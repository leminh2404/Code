min=a[0];
for(int i=0;i<n;i++)
{
    if(a[i]>min)
    min=a[i];
}
if(min<=0)
printf(" Khong co so duong nho nhat trong mang");
else
{
    for(int i=0;i<n;i++)
    if(a[i]<min&&a[i]>0)
    min=a[i];
}
