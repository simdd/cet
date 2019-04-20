echo "#start config

#echo test
[test]
echo hello
echo this is a test direct

#git flow init 
#config userinfo
[init]
git flow init
echo input username
read username
echo input mail
read mail
git config user.name $username
git config user.mail $mail

#automatically pushed to the branch of release
[release]
git branch -D release
git push origin :release
git checkout -b release
git push
git push --set-upstream origin release

#end config" >~/.cetrc
