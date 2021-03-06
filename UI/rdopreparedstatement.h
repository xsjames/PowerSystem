// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CrdoParameters;
class CrdoColumns;
class C_rdoConnection;
class C_rdoResultset;

/////////////////////////////////////////////////////////////////////////////
// CrdoPreparedStatement wrapper class

class CrdoPreparedStatement : public COleDispatchDriver
{
public:
	CrdoPreparedStatement() {}		// Calls COleDispatchDriver default constructor
	CrdoPreparedStatement(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CrdoPreparedStatement(const CrdoPreparedStatement& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

// Attributes
public:

// Operations
public:
	long GetQueryTimeout();
	void SetQueryTimeout(long nNewValue);
	long GetType();
	long GetMaxRows();
	void SetMaxRows(long nNewValue);
	long GetBindThreshold();
	void SetBindThreshold(long nNewValue);
	CrdoParameters GetRdoParameters();
	CString GetName();
	void SetName(LPCTSTR lpszNewValue);
	long GetRowsAffected();
	CString GetSql();
	void SetSql(LPCTSTR lpszNewValue);
	long GetLockType();
	void SetLockType(long nNewValue);
	CrdoColumns GetRdoColumns();
	long GetKeysetSize();
	void SetKeysetSize(long nNewValue);
	long GetRowsetSize();
	void SetRowsetSize(long nNewValue);
	long GetHStmt();
	BOOL GetStillExecuting();
	long GetCursorType();
	void SetCursorType(long nNewValue);
	C_rdoConnection GetActiveConnection();
	void SetRefActiveConnection(LPDISPATCH newValue);
	BOOL GetPrepared();
	void SetPrepared(BOOL bNewValue);
	void Close();
	void Execute(const VARIANT& Options);
	C_rdoResultset OpenResultset(const VARIANT& Type, const VARIANT& LockType, const VARIANT& Options);
	void Cancel();
};
