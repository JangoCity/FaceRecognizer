#ifndef CLANDMARKERSEETA_H_KL_2019_10_21
#define CLANDMARKERSEETA_H_KL_2019_10_21

#pragma once
#include "Landmarker.h"
#include "seeta/FaceLandmarker.h"

#include <QString>
#include <QSharedPointer>

class CLandmarkerSeeta : public CLandmarker
{
    Q_OBJECT
    
public:
    CLandmarkerSeeta(CFace* pFace = nullptr, QObject* parent = nullptr);
    virtual ~CLandmarkerSeeta();

    virtual int Mark(const QImage &image, const QRect &face, QVector<QPointF> &points);

private:
    virtual int UpdateParameter(QString &szErr);
    QSharedPointer<seeta::FaceLandmarker> m_Landmarker;
    bool m_bInit;
};

#endif // CLANDMARKERSEETA_H_KL_2019_10_21
