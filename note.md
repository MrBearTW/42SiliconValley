# Day00
pwd 展現路徑  
ls  
man 說明  
man ls , man man  
ls -l 檢視文件權限  
ls -la 隱藏檔案也顯示出來？  
cd .XXX 跳到ＸＸＸ目錄  
cd .. 回到上一個目錄  
mkdir 製作目錄  make directories  
rm -Rf 離職指令  
     -f          Attempt to remove the files without prompting for confirmation, regardless of the  
                 file's permissions.  If the file does not exist, do not display a diagnostic mes-  
                 sage or modify the exit status to reflect an error.  The -f option overrides any  
                 previous -i options.  
     -R          Attempt to remove the file hierarchy rooted in each file argument.  The -R option  
                 implies the -d option.  If the -i option is specified, the user is prompted for  
                 confirmation before each directory's contents are processed (as well as before the  
                 attempt is made to remove the directory).  If the user does not respond affirma-  
                 tively, the file hierarchy rooted in that directory is skipped.  
rm 能直接刪檔案，不能刪目錄  
rm -rf XXX/  
  
## Filesystem
touch 新增一個檔案   
可以一次製作多個 touch AAA BBB CCC   
cat 看檔案前幾行  
cp 複製  
cp AAA BBB 複製AAA檔案到BBB路徑  
mv 移動  
mv AAA BBB 移動AAA到BBB路徑  
chmod  
Unix系統中可以同時存在大小寫  
d開頭是目錄 -開頭是一個檔案  
r for read ,w for write ,x for excute  
123456789  
rwxr-xr-x  
123是我對該檔案的權限  
456是群組對該檔案的權限  
789是對其他不是你也不是群組的人  

## Vogsphere
 
cd XXX 移到那一個資料夾  
git clone vogsphere@424242424242 AAA 製作一個AAA資料夾同步伺服器端的該資歷夾  
cd AAA  
vim test.c  
git add test.c  
git commit -m "Added test.c"  
git push origin master 第一次要寫完整  
git push 第二次之後  

day00  
ex01  
`echo "424242424242424242424242424242424242424">testDay00`  
`touch -t 201806012342.00 testDay00`  
`chmod 455 testDay00`  
`ls -l`  
ex02  
ex03  
ex04  
ex05  
ex06  


 