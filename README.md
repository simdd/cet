# cet [![license](https://img.shields.io/npm/l/@forchange/apis.svg)](https://www.npmjs.com/package/@forchange/apis)

cet（cooperation effectiveness tools）是一款协作效率工具

### Features

- 命令行工具，命令行式配置，命令行式调用
- 可通过配置文件自定义工作流
- 可导入/导出配置文件

### Install

```shell
brew install https://raw.githubusercontent.com/simdd/cet/master/cet.rb
```

### Configure

```shell
$ cat config
```

```shell
# add direct
[direct]
script1
sciprt2
...
```

### Example

```shell
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
$ cat [direct]
```

### Help

```shell
$ cet help
```

### Version

```shell
$ cet version
```

### Export

```shell
$ cet export
```

### License

MIT
