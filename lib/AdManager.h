#pragma once
#include <string>
#include <memory>
#include <unordered_map>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "Message.pb.h"
#include "AdPlayPolicy.pb.h"

const unsigned int WM_APP_PLAYER_EVENT = WM_APP + 1000;
const unsigned int WM_APP_ADFILE_DOWNLOADED = WM_APP + 1001;	// ����ļ����سɹ���Ϣ֪ͨ

class CPlayer;
class TcpSession;
class AdManager
{
public:
	static AdManager& getInstance();
	
	void setConfig(					// ���ò���
		const std::string& peerAddr	// �Է���ַ��������ĵ�ַ�����ɷ���˵�ַ��
		, int peerPort				// �Է��˿�
		, int barId = 0				// ����ID
		, bool isBarServer = false	// �Ƿ������ɷ����
		, int listenPort = 0		// ���ɷ���˵ļ����˿�
		, std::string logLvl = "info");	// ��־����

	CPlayer* setVideoWnd(HWND hwnd);// ������������Ƶ�����ھ��
	void closeVideoWnd();			// �ر���Ƶ����

	void bgnBusiness();				// ��ʼ���ҵ��

	void endBusiness();				// ͣҵ���ҵ��

	Ad getAd(int adId);				// ���������Ϣ

	std::shared_ptr<std::string> getAdFile(int adId);// ��������ļ�

	AdPlayPolicy getAdPlayPolicy();	// ��沥�Ų���

	std::unordered_map<uint32_t, Ad> getAdList();	// ���й����Ϣ

	void handleRequest(std::shared_ptr<TcpSession> session, Message msg);	// �������ɿͻ��˵�����

	class AdManagerImpl;			// public, ������boost::unit_test��ʹ��
private:
	AdManager();
	~AdManager();

	std::unique_ptr<AdManagerImpl> _pimpl;
};


