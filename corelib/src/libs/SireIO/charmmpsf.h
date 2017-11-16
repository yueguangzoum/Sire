/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2017  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 2 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the developer's mailing list
  *  at http://siremol.org
  *
\*********************************************/

#ifndef SIREIO_CHARMMPSF_H
#define SIREIO_CHARMMPSF_H

#include "moleculeparser.h"

SIRE_BEGIN_HEADER

namespace SireIO
{
class PSFAtom;
class CharmmParam;
class CharmmPSF;
}

namespace SireMol
{
class Atom;
class MolEditor;
class MoleculeData;
class MoleculeInfoData;
class MoleculeView;
class Residue;
}

namespace SireMM
{
class TwoAtomFunctions;
class ThreeAtomFunctions;
class FourAtomFunctions;
}

QDataStream& operator<<(QDataStream&, const SireIO::PSFAtom&);
QDataStream& operator>>(QDataStream&, SireIO::PSFAtom&);

QDataStream& operator<<(QDataStream&, const SireIO::CharmmParam&);
QDataStream& operator>>(QDataStream&, SireIO::CharmmParam&);

QDataStream& operator<<(QDataStream&, const SireIO::CharmmPSF&);
QDataStream& operator>>(QDataStream&, SireIO::CharmmPSF&);

namespace SireIO
{

/** This class provides functionality for reading/writing
    CHARMM PSF atom records (!NATOM).

    @author Lester Hedges
*/
class SIREIO_EXPORT PSFAtom
{

friend QDataStream& ::operator<<(QDataStream&, const PSFAtom&);
friend QDataStream& ::operator>>(QDataStream&, PSFAtom&);

public:
    /** Default constructor. */
    PSFAtom();

    /** Constructor. */
    PSFAtom(const QString &line, int index, QStringList &errors);

    /** Constructor. */
    PSFAtom(const SireMol::Atom &atom, const QString &segment,
        QStringList &errors, const PropertyMap &map);

    /** Generate a PSD record from the atom data. */
    QString toPSFRecord() const;

    /** Convert the atom name to PDB format. */
    QString toPDBName() const;

    static const char* typeName();

    /** Get the atom index. */
    int getIndex() const;

    /** Get the molecule index. */
    int getMolIndex() const;

    /** Set the molecule index. */
    void setMolIndex(int index);

    /** Get the atom number. */
    int getNumber() const;

    /** Get the segment name. */
    QString getSegment() const;

    /** Get the residue number. */
    qint64 getResNum() const;

    /** Get the residue name. */
    QString getResName() const;

    /** Get the atom name. */
    QString getName() const;

    /** Get the atom type. */
    QString getType() const;

    /** Get the atom charge. */
    double getCharge() const;

    /** Get the atom mass. */
    double getMass() const;

private:
    /** The index in the atoms vector. */
    qint64 index;

    /** The index of the molecule to which this atom belongs. */
    qint64 mol_idx;

    /** Serial number. */
    qint64 number;

    /** Segment name. */
    QString segment;

    /** Residue number. */
    qint64 res_num;

    /** Residue name. */
    QString res_name;

    /** Atom name. */
    QString name;

    /** Atom number. */
    QString type;

    /** Charge. */
    double charge;

    /** Mass. */
    double mass;
};

/** This is a container class for CHARMM parameter records.

    @author Lester Hedges
*/
class SIREIO_EXPORT CharmmParam
{

friend QDataStream& ::operator<<(QDataStream&, const CharmmParam&);
friend QDataStream& ::operator>>(QDataStream&, CharmmParam&);

public:
    /* Default constructor. */
    CharmmParam();

    /** Constructor. */
    CharmmParam(const QString &line, int type, QStringList &errors);

    static const char* typeName();

    /** Get the vector of atoms. */
    const QVector<QString>& getAtoms() const;

    /** Get the vector of parameters. */
    const QVector<double>& getParams() const;

    /** Get the parameter type. */
    qint64 getType() const;

private:
    /** The vector of atoms to which the parameter set applies. */
    QVector<QString> atoms;

    /** The vector of parameters. */
    QVector<double> params;

    /** The paramter type. */
    qint64 type;
};

/** This class holds a parser for reading and writing CHARMM PSF files.

    @author Lester Hedges
*/
class SIREIO_EXPORT CharmmPSF : public SireBase::ConcreteProperty<CharmmPSF,MoleculeParser>
{

friend QDataStream& ::operator<<(QDataStream&, const CharmmPSF&);
friend QDataStream& ::operator>>(QDataStream&, CharmmPSF&);

public:
    CharmmPSF();
    CharmmPSF(const QString &filename,
         const PropertyMap &map = PropertyMap());

    CharmmPSF(const QStringList &lines,
         const PropertyMap &map = PropertyMap());
    CharmmPSF(const SireSystem::System &system,
         const PropertyMap &map = PropertyMap());

    CharmmPSF(const CharmmPSF &other);

    ~CharmmPSF();

    CharmmPSF& operator=(const CharmmPSF &other);

    bool operator==(const CharmmPSF &other) const;
    bool operator!=(const CharmmPSF &other) const;

    static const char* typeName();

    const char* what() const;

    MoleculeParserPtr construct(const QString &filename,
                                const PropertyMap &map) const;

    MoleculeParserPtr construct(const QStringList &lines,
                                const PropertyMap &map) const;

    MoleculeParserPtr construct(const SireSystem::System &system,
                                const PropertyMap &map) const;

    QString toString() const;
    QVector<QString> toLines() const;

    QString formatName() const;
    QString formatDescription() const;
    QStringList formatSuffix() const;

    bool isLead() const;
    bool canFollow() const;

    int nMolecules() const;
    int nAtoms() const;
    int nAtoms(int i) const;
    int nBonds() const;
    int nBonds(int i) const;
    int nAngles() const;
    int nAngles(int i) const;
    int nDihedrals() const;
    int nDihedrals(int i) const;
    int nImpropers() const;
    int nImpropers(int i) const;
    int nCrossTerms() const;
    int nCrossTerms(int i) const;

protected:
    SireSystem::System startSystem(const PropertyMap &map) const;
    SireSystem::System startSystem(const QVector<QString> &param_lines,
                                   const PropertyMap &map) const;

private:
    void assertSane() const;
    void parseLines(const PropertyMap &map);
    void parseParameters(
        const QVector<QString> &param_lines,
        QMultiHash<QString, CharmmParam> &bond_params,
        QMultiHash<QString, CharmmParam> &angle_params,
        QMultiHash<QString, CharmmParam> &dihedral_params,
        QMultiHash<QString, CharmmParam> &improper_params,
        QMultiHash<QString, CharmmParam> &cross_params) const;

    SireMol::MolStructureEditor getMolStructure(int imol,
        const SireBase::PropertyName &cutting) const;

    SireMol::MolEditor getMolecule(int imol,
        const PropertyMap &map = PropertyMap()) const;

    void findMolecules();

    void findBondedAtoms(int atom_idx, int mol_idx, const QHash<int, int> &bonded_atoms,
        QHash<int, int> &atom_to_mol, QSet<qint64> &atoms_in_mol) const;

    QList<CharmmParam> findParameters(const QVector<QString> &search_atoms,
        const QMultiHash<QString, CharmmParam> &params, int type) const;

    QString generateKey(QVector<QString> words) const;

    template<class T>
    T getProperty(const SireBase::PropertyName &prop,
        const SireMol::MoleculeData &moldata, bool *found);

    SireMol::Molecule parameteriseMolecule(
        int imol,
        const SireMol::Molecule &sire_mol,
        const QMultiHash<QString, CharmmParam> &bond_params,
        const QMultiHash<QString, CharmmParam> &angle_params,
        const QMultiHash<QString, CharmmParam> &dihedral_params,
        const QMultiHash<QString, CharmmParam> &improper_params,
        const QMultiHash<QString, CharmmParam> &cross_params,
        const PropertyMap &map = PropertyMap()) const;

    void parseMolecule(
        int imol,
        const SireMol::Molecule &sire_mol,
        QVector<PSFAtom> &local_atoms,
        QVector<QVector<qint64> > &local_bonds,
        QVector<QVector<qint64> > &local_angles,
        QVector<QVector<qint64> > &local_dihedrals,
        QVector<QVector<qint64> > &local_impropers,
        QStringList &local_errors,
        const PropertyMap &map);

    void getBondsFrom(const SireMM::TwoAtomFunctions &funcs,
        const SireMol::MoleculeInfoData &molinfo, QVector<QVector<qint64> > &local_bonds);

    void getAnglesFrom(const SireMM::ThreeAtomFunctions &funcs,
        const SireMol::MoleculeInfoData &molinfo, QVector<QVector<qint64> > &local_angles);

    void getFourAtomFrom(const SireMM::FourAtomFunctions &funcs,
        const SireMol::MoleculeInfoData &molinfo, QVector<QVector<qint64> > &four_atom);

    /** The atom record data (!NATOM). */
    QVector<PSFAtom> atoms;

    /** The bond record data (!NBOND). */
    QVector<QVector<qint64> > bonds;

    /** The indices of the bonds for each molecule. */
    QVector<QVector<qint64> > mol_bonds;

    /** The angle record data (!NTHETA). */
    QVector<QVector<qint64> > angles;

    /** The indices of the angles for each molecule. */
    QVector<QVector<qint64> > mol_angles;

    /** The dihedral record data (!NPHI). */
    QVector<QVector<qint64> > dihedrals;

    /** The indices of the dihedrals for each molecule. */
    QVector<QVector<qint64> > mol_dihedrals;

    /** The improper record data (!NIMPHI). */
    QVector<QVector<qint64> > impropers;

    /** The indices of the impropers for each molecule. */
    QVector<QVector<qint64> > mol_impropers;

    /** The cross term record data (!NCRTERM). */
    QVector<QVector<qint64> > cross_terms;

    /** The indices of the cross-terms for each molecule. */
    QVector<QVector<qint64> > mol_cross_terms;

    /** A hash between atom numbers from the PSF record and
        indices in the atoms vector. */
    QHash<qint64, qint64> num_to_idx;

    /** The indices of the atoms in each molecule. */
    QVector<QVector<qint64> > molecules;

    /** Any warnings that were raised when reading the file. */
    QStringList parse_warnings;
};

}

Q_DECLARE_METATYPE( SireIO::PSFAtom )
Q_DECLARE_METATYPE( SireIO::CharmmParam )
Q_DECLARE_METATYPE( SireIO::CharmmPSF )

SIRE_EXPOSE_CLASS( SireIO::CharmmPSF )

SIRE_END_HEADER

#endif
