// 잘 데이터 잘 전달되었는지 확인
sudo tcpdump -i any -ex src 192.168.11.2 -w dump // 자기 getway주소
sudo tcpdump -i any -ex src 192.168.11.2 -r dump 
