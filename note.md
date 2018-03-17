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
mv 移動，改名  
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

## Kerberos ticket
`klist`秀出所有 . 
`kdestory` . 
`kinit mmontinet`拿新的票，要輸入密碼 . 
  
## Emacs
Crt+X or Crt+C quit   
Crtl+X + Crtl+S + Enter save  
Crtl+Z suspend  
fg go back  
Crtl+E + Crtl+A go to beginning 跳回行首   
Crtl+S + ??? find ??? in the file  
Crtl+F + Crtl+X open another file  
Crtl+X + 3 水平分割  
Crtl+X + 2 垂直分割  
Crtl+X + O 畫面之間選擇  
Crtl+X + 0 把游標所在的分頁關閉  
Crtl+X + Crtl+F add the mail back  
Crtl+C + Crtl+H 加入42的圖檔  
Crtl+K 剪下
Crtl+Y 貼上

## Vim 
兩種模式Command Mode / Insertion Mode   
i 進入Insertion Mode  
esc 退出Insertion Mode  
:w + enter save  
:q 退出  
$ to the end  
^ to th begging  
  
:e open new file  
  
:set nu 開啟行數顯示  
:vs 開啟水平分頁  
:sp 開啟垂直分頁  
crtl + w 在分頁之間移動  
:q 退出  
  
:Stdheader 加入42的圖檔  
Fn + F1  加入42的圖檔  
```
K上J下L左H右  
O寫入新的一行  
I進入編輯模式  
dd刪除一整行  
ESC後  
:wq 存檔離開  
:q! 不存檔離開  
```


# Ｄay00ex  
ex01  建一個檔案改時間改權限  
`echo "424242424242424242424242424242424242424">testDay00`  
`touch -t 201806012342.00 testDay00`  
`chmod 455 testDay00`  
`ls -l`  
ex02  
建立捷徑`n -s test0 /nfs/2018/c/cperng/Desktop/day00/ex02/test6`  
打包`tar -cf exo2.tar *`  
解包`tar xzf exo2.tar`  
ex03  
ex04  剪下並選出最後一行  
`ldapwhoami -Q | cut -d ':' -f 2 | cut -d ',' -f 1,-6`  
ex05 選出 排序 修剪  
`ldapsearch "cn" 2> /dev/null | grep "uid=z" | sort -t '=' -k 2 -r | cut -d':' -f2 | cut -d',' -f1`  
ex06  
ex07  
ex08  
ex09  
`patch a sw.diff`  
ex10  
ex11  
  
# Day01
## echo, cat, more
echo 可以帶參數  
  
cat  
    -e      Display non-printing characters (see the -v option), and display a dollar sign (`$') at the end of each line.  
  
more 一頁一頁翻動，只能向下  
less 一頁一頁翻動，可以上下  
/??? 搜尋???  
## head, tail, grep  

`tail -n 3 file.txt`  
  
grep    
`grep "???" file.txt`  
`grep -v "???" file.txt`  
    -v, --invert-match 找沒有的  
             Selected lines are those not matching any of the specified patterns.  
    -i, --ignore-case 不區分大小寫  
             Perform case insensitive matching.  By default, grep is case sensitive.  
## redirections
>  
`echo "42" > output.txt`  keep on reading on th standard input 偽裝成標準輸入
>>  
`echo "school" > output.txt`  

<
`echo < output.txt`  
=  
`cat output.txt`  
  
|
`cat output.txt | grep "???" | head -n 1`

## sort, cut
sort  
`cat output.txt | sort`  
ASCII characters sorting , uppercasse are before lowercasses  
other find in man  
  
cut  
`cat output.txt | sort | cut -d ,-f 1` 
`cat output.txt | sort | cut -d ,-f 1 | cat -e` -e可以看出印不出來的字元  
`cat output.txt | sort | cut -d ,-f 1`
  
sed  stream editor  
`cat output.txt | sort | cut -d ,-f 1 | sed "s/thomas/Thomas"` 把thomas換成Thomas  
  
regex  
  
tr translate characters
`cat output.txt | sort | cut -d ,-f 1 | tr "a" "e"`  

## wc, ifconfig, bc, find, env, export  
wc 計算字數行數字元  
`wc output.txt`  
AAA BBB CCC
AAA行 BBB個單字 CCC字元  
`wc *` 計算所有檔案  
`cat output.txt | grep Thomas | wc -l` 計算出有Thomas有幾行  
  
file  
`file output.txt`  
    
ifconfig  
  
bc 計算機  
三角函數，指數，對數 2,8,10,16進位轉換  
`echo "4+2" | bc`  
  
find  
`find .`  
`find /usr`  
`find /usr -name "ls*"` 找/usr目錄下的ls開頭  
  
env  
to all your binaries and scripts  , to all your binaries and scripts  
知道使用者，使用什麼shell，參數  

export  
`export LINE=3`增加一個環境變數  
`echo $LINE`回傳這個參數  

## stdout, stderr
`cat output.txt | rev`  
1 standard output  
2 standard erro  
  
/dev/null  
`echo "???" >/dev/null`
 
# 幫MAC加一下ll指令
`vim ~/.bash_profile`  
輸入下面內容  
```
alias ll='ls -alF'
#alias la='ls -A'
#alias l='ls -CF
```
重新整理  
`source ~/.bash_profile`  
  
可以使用ll等命令了  
  
## Day01ex
ex01  
`groups $FT_USER`  
ex02  
`find .. -name "*.sh" | cut -d "/" -f 3 | cut -d "." -f 1`  
ex03  
`find .. | wc | awk '{print $1}'`  
ex04  
`ifconfig -a | grep -e "ether" | cut -d " " -f2 | grep ":"`  
ex05  
"\?$*'KwaMe'*$?\"$  
\"\\\?\$\*\'KwaMe\'\*\$\?\\\"  
ex06  
ex07  
ex08  
`ldapsearch "uid=bon" | wc -l`  
ex09  
  
# Day02
all functions have a type  
they return a value of that type whenever they used  
void = null  
## gcc 
-o allows us to define the type of output file  
  
compile `gcc -o jour02 jour02.c` 
執行`./jour02`  
write(A, "@", C);  
A = file descriptor描述  
"@" = string , a buffer  
C = a size , number of bite to be displayed  
& = we give a character's address ,insted of the charcter itself,allow us to transform it into a string(char*)  
  
# Day03
## Pointer
Variables  
可以指向另外一個變數的位置，遙控調整  
一個執行序執行時，是有權利取得實際的記憶體  
32bits 4GB  
64bits  2的64次方  
SWAP  
Memory mapped by something called MMU
high memory = stack  
low memory = heep  
## Assignment
做main.c

## Dereferenciation
指標要指向相同的種類

## Pointer arithmetic算術
可以對位置做計算  
利用asterisk來檢查在位置上的是什麼  
  
## Arrays  

end with a \0  
  
## 

# Day4
## Recursion - Theory
`norminette -R CheckForbiddenSourceHeader`

