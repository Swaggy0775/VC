
// exp3View.h : Cexp3View 类的接口
//

#pragma once


class Cexp3View : public CView
{
protected: // 仅从序列化创建
	Cexp3View();
	DECLARE_DYNCREATE(Cexp3View)

// 特性
public:
	Cexp3Doc* GetDocument() const;

// 操作
public:
	CRect cr;
	int r = 50;
	bool set=false;
	bool set2 = false;
// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~Cexp3View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // exp3View.cpp 中的调试版本
inline Cexp3Doc* Cexp3View::GetDocument() const
   { return reinterpret_cast<Cexp3Doc*>(m_pDocument); }
#endif

