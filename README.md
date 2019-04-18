# cet

[![license](https://img.shields.io/npm/l/@forchange/apis.svg)](https://www.npmjs.com/package/@forchange/apis)

cet（cooperation effectiveness tools）是一款协作效率工具

### Features

- 通过配置文件自定义工作流
- 可导入/导出配置文件

### Install

```shell
brew install cet
```

### Configure

```shell
$ cat config
```

```shell
# clone and config userinfo
[clone]
git clone stdin
git config

# automatically pushed to the branch of release
[release]
git branch -D release
git push origin :release
git checkout -b release
git push
git push --set-upstream origin release
```

### Usage

```shell
$ cat clone https://github.com/simdd/cet.git
$ input username:
$ input email:
```

```shell
$ cat release
```

### Help

```shell
$ cet -h
```

### Version

```shell
$ cet -v
```

### Update

```shell
$ cet update
```

### License

MIT
