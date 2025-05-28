# 个人项目开发



## 介绍

本项目的开发来源于锤子理论:当你手里有个锤子你看什么都像是钉子

当前项目的主要目标是用cpp开发一系列命令行工具,简化一些日常中的工作

## 基本功能

### dian-cli

常见的功能汇总,目前的想法是写各种powershell脚本,然后供他选用,因为常用的命令不想重复使用

### ime-dian-d

使用输入法的过程中存在这样的一个问题,有很多的软件窗口切换过来的时候都是中文输入法,这个时候输入快捷键就有一个问题,会默认打开中文输入法,这就让我很烦,这个可以默认切换到英文输入法,不需要手动配置

## 编译

编译环境数确定的,只允许Windows 的msvc环境下编译,同时,需要cmake , git .有这些就足够编译了

编译步骤

``` bash
git clone --recurse-submodules https://github.com/dian-yu-luo/dian-cli.git
cd dian-cli
cmake  -S. -Bbuild  
cmake --build build --target install  

```
## 安装依赖
https://aka.ms/vs/17/release/vc_redist.x64.exe