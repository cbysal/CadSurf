#include "stdafx.h"

#include "BSplineSurface.h"
#include "AxisSystem.h"
#include "MMath.h"
#include "GeomException.h"

CBSplineSurface::CBSplineSurface(const std::array<std::array<CPoint3D, 4>, 4> &newCpMatrix) : cpMat(newCpMatrix)
{
}

CPoint3D CBSplineSurface::PointAtPara(const double uPar, const double vPar)
{
    double u1 = uPar, v1 = vPar;
    double u2 = u1 * u1, v2 = v1 * v1;
    double u3 = u2 * u1, v3 = v2 * v1;

    std::array<double, 4> uMat, vMat;
    uMat[0] = (-u3 + 3 * u2 - 3 * u1 + 1) / 6;
    uMat[1] = (3 * u3 - 6 * u2 + 4) / 6;
    uMat[2] = (-3 * u3 + 3 * u2 + 3 * u1 + 1) / 6;
    uMat[3] = u3 / 6;
    vMat[0] = (-v3 + 3 * v2 - 3 * v1 + 1) / 6;
    vMat[1] = (3 * v3 - 6 * v2 + 4) / 6;
    vMat[2] = (-3 * v3 + 3 * v2 + 3 * v1 + 1) / 6;
    vMat[3] = v3 / 6;

    CPoint3D result(0, 0, 0);
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            result += cpMat[i][j] * uMat[i] * vMat[j];
        }
    }
    return result;
}

bool CBSplineSurface::IsUClosed() const
{
    if (itsFirstUParameter == 0 && itsLastUParameter == 1)
        return true;
    return false;
}

bool CBSplineSurface::IsVClosed() const
{
    if (itsFirstVParameter == 0 && itsLastVParameter == 1)
        return true;
    return false;
}

CSurface* CBSplineSurface::Copy() const
{
    CBSplineSurface* R = new CBSplineSurface(cpMat);
    return R;
}

void CBSplineSurface::Translate(const COneAxis& Ax, const double& amt)
{
    CGeometry::Translate(Ax, amt);
}

void CBSplineSurface::Translate(double dx, double dy, double dz)
{
    itsLocation.Translate(dx, dy, dz);
}

void CBSplineSurface::Translate(const CVector3D& V)
{
    itsLocation.Translate(V);
}

void CBSplineSurface::Translate(const CPoint3D& P1, const CPoint3D& P2)
{
    itsLocation.Translate(P1, P2);
}

void CBSplineSurface::Rotate(const COneAxis& Ax, double ang)
{
    itsLocation.Rotate(Ax, ang);
}

void CBSplineSurface::Scale(const CPoint3D& P, double fact)
{
    itsLocation.Scale(P, fact);
}

void CBSplineSurface::Mirror(const CPoint3D& P)
{
    itsLocation.Mirror(P);
}

void CBSplineSurface::Mirror(const COneAxis& Ax)
{
    itsLocation.Mirror(Ax);
}

void CBSplineSurface::Mirror(const CPlane& Pln)
{
    itsLocation.Mirror(Pln);
}
