# linux_gcc


## 実行の仕方


```bash
# CentOSのイメージ取得
$ docker pull centos:7

# 名前付けてコンテナ作成
$ docker run -it -d --name linuxpg centos:7

# 実行
docker run -it --rm --mount type=bind,source=$(pwd),target=/home/linux linuxpg bash
```
