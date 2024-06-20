#ifndef _PATCH_MANAGER_H_
#define _PATCH_MANAGER_H_


//��ġ ���� ���� ����ü
struct FILE_INFO
{	
	bool		bDir;					//���丮����?	
	DWORD		nFileSize;				//���� ũ��	
	FILETIME	ft;						//���� ���� �����ð�	
	char		szPath[MAX_PATH];		//�н�	
	char		szServerPath[MAX_PATH];
};


enum MAKEPATCHLIST_RESULT
{
	MAKEPATCHLIST_FILE_NOTFOUND,
	MAKEPATCHLIST_VERSION_MISMATCH,
	MAKEPATCHLIST_OK
};


typedef list<FILE_INFO> FileContainer;
typedef FileContainer::iterator FileContainerIterator;

class CPatchManager
{
public:
	CPatchManager();
	~CPatchManager();

private:
	char					m_szCurrentDirectory[MAX_PATH];	//����� ���� ���丮										
	
public:
	FileContainer			m_files;								// ���� ����
	
public:
	LPCTSTR					GetCurrentLocalDirectory() { return m_szCurrentDirectory; }
	void					SetCurrentLocalDirectory();
	MAKEPATCHLIST_RESULT	MakePatchList( int nVersion );
	void					EnqueueFILE( LPCTSTR szFile, bool bDir, int nSize, SYSTEMTIME* pTime );
	size_t					GetListCount() { return m_files.size(); }

private:
	bool					IsSameFile( FILE_INFO& info );
	void					CheckFiles();
};

#endif