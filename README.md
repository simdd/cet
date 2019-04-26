# cet [![license](https://img.shields.io/npm/l/@forchange/apis.svg)](https://www.npmjs.com/package/@forchange/apis)

cet（cooperation effectiveness tools）是提升工作流效率的命令行工具

### Features

- 命令行式配置、命令行式调用
- 可通过配置文件组合脚本，自定义工作流
- 配置文件可导入/导出

### Install

```shell
brew install https://raw.githubusercontent.com/simdd/cet/master/cet.rb
```

### Test

```shell
cet test
```

### Configure

```shell
$ cet config
```

> 指令上下以空行分割

```shell
#添加指令说明
[direct]
script1
sciprt2
```

### Example

```shell
#发布当前分支到远端release
[release]
git branch -D release
git push origin :release
git checkout -b release
git push
git push --set-upstream origin release
```

### Export

```shell
$ cet export
```

### Import

```shell
$ cet import [filePath]
```

### Usage

```shell
$ cet [direct]
```

### Help

```shell
$ cet help
```

### Version

```shell
$ cet version
```

### License

MIT
