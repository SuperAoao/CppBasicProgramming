@echo off

REM ���� Visual Studio ��װ·��
set "VS_PATH=C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\IDE\"

REM ����Ҫ�޸ĵ�·��
set "NEW_DEV_ENV=C:\Qt\Qt5.9.3\5.9.3\msvc2015_64\bin;D:\Dev\ht5\install\3rdpartyX64_VS15\bin;D:\Dev\ht5\install\FxGISSDK\bin;;D:\Dev\ht5\install\osg\bin;D:\Dev\ht5\install\osgearth\bin"

REM �����µĻ������� DEV_ENV
setx  DEV_ENV "%NEW_DEV_ENV%" -m

REM ����Ƿ��Ѿ�����Ҫ��ӵ�·��
echo %PATH% | findstr /c:"%DEV_ENV%" >nul 2>&1
if %errorlevel% equ 0 (
  echo Path already exists in PATH variable.
) else (
  REM ��ȡ��ǰ�� PATH ��������ֵ��������·��׷�ӵ�ĩβ
  setx  PATH "%PATH%;%%DEV_ENV%%" -m
  echo %%DEV_ENV%% added to PATH variable.
)



REM ���� Visual Studio �������
start "" "%VS_PATH%\devenv.exe" "D:\Dev\ht5\Build\buildSSS\SpaceSimSystem.sln"

timeout /t -1

