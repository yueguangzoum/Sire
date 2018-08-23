//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMol_registrars.h"

#include "atombeads.h"
#include "molid.h"
#include "residuecutting.h"
#include "mover_metaid.h"
#include "molecule.h"
#include "atomselection.h"
#include "segidx.h"
#include "segproperty.hpp"
#include "atomname.h"
#include "perturbation.h"
#include "atomradii.h"
#include "molecules.h"
#include "atommatcher.h"
#include "weightfunction.h"
#include "atomenergies.h"
#include "beadeditor.h"
#include "volumemap.h"
#include "molnum.h"
#include "beadidx.h"
#include "bondhunter.h"
#include "atom.h"
#include "moleditor.h"
#include "atompolarisabilities.h"
#include "beads.h"
#include "bead.h"
#include "residue.h"
#include "viewsofmol.h"
#include "atomvelocities.h"
#include "improperid.h"
#include "cgproperty.hpp"
#include "cgname.h"
#include "mgidsandmaps.h"
#include "segidentifier.h"
#include "residentifier.h"
#include "chainidx.h"
#include "atomelements.h"
#include "cutgroup.h"
#include "moleculegroup.h"
#include "connectivity.h"
#include "chainidentifier.h"
#include "segeditor.h"
#include "resnum.h"
#include "residx.h"
#include "chainresid.h"
#include "moleculegroups.h"
#include "within.h"
#include "angleid.h"
#include "atomeditor.h"
#include "mgname.h"
#include "molresid.h"
#include "atomnum.h"
#include "molname.h"
#include "atomproperty.hpp"
#include "withatoms.h"
#include "element.h"
#include "cgidx.h"
#include "resname.h"
#include "reseditor.h"
#include "mgnum.h"
#include "chainproperty.hpp"
#include "atomidentifier.h"
#include "moleculedata.h"
#include "atomidx.h"
#include "atommatchers.h"
#include "resproperty.hpp"
#include "evaluator.h"
#include "segment.h"
#include "bondid.h"
#include "specifymol.h"
#include "groupgroupids.h"
#include "segname.h"
#include "parser.h"
#include "molidentifier.h"
#include "molwithresid.h"
#include "chainname.h"
#include "mgidentifier.h"
#include "atomcoords.h"
#include "cgidentifier.h"
#include "groupatomids.h"
#include "dihedralid.h"
#include "cgeditor.h"
#include "molidx.h"
#include "chargeperturbation.h"
#include "molatomid.h"
#include "beadnum.h"
#include "chaineditor.h"
#include "atomcutting.h"
#include "moleculeinfodata.h"
#include "partialmolecule.h"
#include "withres.h"
#include "mgidx.h"
#include "atommasses.h"
#include "moleculeinfo.h"
#include "beading.h"
#include "beadproperty.hpp"
#include "geometryperturbation.h"
#include "select.h"
#include "amberparameters.h"
#include "atomcharges.h"
#include "atomforces.h"
#include "chain.h"
#include "cgatomidx.h"

#include "Helpers/objectregistry.hpp"

void register_SireMol_objects()
{

    ObjectRegistry::registerConverterFor< SireMol::AtomBeads >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::MolID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::MolID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResidueCutting >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Atom> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Chain> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::CutGroup> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Residue> > >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Segment> > >();
    ObjectRegistry::registerConverterFor< SireMol::Molecule >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Molecule> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomSelection >();
    ObjectRegistry::registerConverterFor< SireMol::SegIdx >();
    ObjectRegistry::registerConverterFor< SireMol::SegStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::SegVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomName >();
    ObjectRegistry::registerConverterFor< SireMol::NullPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::Perturbations >();
    ObjectRegistry::registerConverterFor< SireMol::AtomRadii >();
    ObjectRegistry::registerConverterFor< SireMol::Molecules >();
    ObjectRegistry::registerConverterFor< SireMol::AtomResultMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMatchInverter >();
    ObjectRegistry::registerConverterFor< SireMol::RelFromMass >();
    ObjectRegistry::registerConverterFor< SireMol::RelFromNumber >();
    ObjectRegistry::registerConverterFor< SireMol::AbsFromMass >();
    ObjectRegistry::registerConverterFor< SireMol::AbsFromNumber >();
    ObjectRegistry::registerConverterFor< SireMol::AtomEnergies >();
    ObjectRegistry::registerConverterFor< SireMol::BeadEditor >();
    ObjectRegistry::registerConverterFor< SireMol::VolumeMap >();
    ObjectRegistry::registerConverterFor< SireMol::MolNum >();
    ObjectRegistry::registerConverterFor< SireMol::BeadIdx >();
    ObjectRegistry::registerConverterFor< SireMol::NullBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::CovalentBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::ChemicalBondHunter >();
    ObjectRegistry::registerConverterFor< SireMol::Atom >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Atom> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Atom> > >();
    ObjectRegistry::registerConverterFor< SireMol::MolEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MolStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomPolarisabilities >();
    ObjectRegistry::registerConverterFor< SireMol::Beads >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Beads> >();
    ObjectRegistry::registerConverterFor< SireMol::Bead >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Bead> >();
    ObjectRegistry::registerConverterFor< SireMol::Residue >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Residue> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Residue> > >();
    ObjectRegistry::registerConverterFor< SireMol::ViewsOfMol >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::ViewsOfMol> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomVelocities >();
    ObjectRegistry::registerConverterFor< SireMol::Velocity3D >();
    ObjectRegistry::registerConverterFor< SireMol::ImproperID >();
    ObjectRegistry::registerConverterFor< SireMol::CGStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::CGName >();
    ObjectRegistry::registerConverterFor< SireMol::MGIDsAndMaps >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::SegID> >();
    ObjectRegistry::registerConverterFor< SireMol::SegIdentifier >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::ResID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIdx >();
    ObjectRegistry::registerConverterFor< SireMol::AtomElements >();
    ObjectRegistry::registerConverterFor< SireMol::CutGroup >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::CutGroup> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::CutGroup> > >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeGroup >();
    ObjectRegistry::registerConverterFor< SireMol::Connectivity >();
    ObjectRegistry::registerConverterFor< SireMol::ConnectivityEditor >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::ResIn<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::ChainID> >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::SegEditor >();
    ObjectRegistry::registerConverterFor< SireMol::SegStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResNum >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ChainResID >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeGroups >();
    ObjectRegistry::registerConverterFor< SireMol::Within >();
    ObjectRegistry::registerConverterFor< SireMol::AngleID >();
    ObjectRegistry::registerConverterFor< SireMol::AtomEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MGName >();
    ObjectRegistry::registerConverterFor< SireMol::MolResID >();
    ObjectRegistry::registerConverterFor< SireMol::MolResNum >();
    ObjectRegistry::registerConverterFor< SireMol::AtomNum >();
    ObjectRegistry::registerConverterFor< SireMol::MolName >();
    ObjectRegistry::registerConverterFor< SireMol::AtomStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::CGsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::ChainsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::SegsWithAtoms >();
    ObjectRegistry::registerConverterFor< SireMol::Element >();
    ObjectRegistry::registerConverterFor< SireMol::CGIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ResName >();
    ObjectRegistry::registerConverterFor< SireMol::ResEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ResStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MGNum >();
    ObjectRegistry::registerConverterFor< SireMol::ChainStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ChainVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdentifier >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::AtomID> >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeData >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdx >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIdxMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomIDMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMultiMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMCSMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomNameMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomMCSMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResIdxAtomCoordMatcher >();
    ObjectRegistry::registerConverterFor< SireMol::ResStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::ResVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::Evaluator >();
    ObjectRegistry::registerConverterFor< SireMol::Segment >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Segment> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Segment> > >();
    ObjectRegistry::registerConverterFor< SireMol::BondID >();
    ObjectRegistry::registerConverterFor< SireMol::SpecifyMol >();
    ObjectRegistry::registerConverterFor< SireMol::SegResID >();
    ObjectRegistry::registerConverterFor< SireMol::SegChainID >();
    ObjectRegistry::registerConverterFor< SireMol::SegCGID >();
    ObjectRegistry::registerConverterFor< SireMol::CGResID >();
    ObjectRegistry::registerConverterFor< SireMol::CGChainID >();
    ObjectRegistry::registerConverterFor< SireMol::SegName >();
    ObjectRegistry::registerConverterFor< SireMol::parse_error >();
    ObjectRegistry::registerConverterFor< SireMol::MolIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::MolWithResID >();
    ObjectRegistry::registerConverterFor< SireMol::ChainName >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::MGID> >();
    ObjectRegistry::registerConverterFor< SireMol::MGIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCoords >();
    ObjectRegistry::registerConverterFor< SireID::Specify<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireMol::AtomsIn<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDAndSet<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::IDOrSet<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::MatchAll<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireID::InvertMatch<SireMol::CGID> >();
    ObjectRegistry::registerConverterFor< SireMol::CGIdentifier >();
    ObjectRegistry::registerConverterFor< SireMol::ResAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::ChainAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::SegAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::CGAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::DihedralID >();
    ObjectRegistry::registerConverterFor< SireMol::CGEditor >();
    ObjectRegistry::registerConverterFor< SireMol::CGStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::MolIdx >();
    ObjectRegistry::registerConverterFor< SireMol::ChargePerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::MolAtomID >();
    ObjectRegistry::registerConverterFor< SireMol::BeadNum >();
    ObjectRegistry::registerConverterFor< SireMol::ChainEditor >();
    ObjectRegistry::registerConverterFor< SireMol::ChainStructureEditor >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCutting >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeInfoData >();
    ObjectRegistry::registerConverterFor< SireMol::PartialMolecule >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::PartialMolecule> >();
    ObjectRegistry::registerConverterFor< SireMol::ChainsWithRes >();
    ObjectRegistry::registerConverterFor< SireMol::MGIdx >();
    ObjectRegistry::registerConverterFor< SireMol::AtomMasses >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeInfo >();
    ObjectRegistry::registerConverterFor< SireMol::MoleculeBeading >();
    ObjectRegistry::registerConverterFor< SireMol::ResidueBeading >();
    ObjectRegistry::registerConverterFor< SireMol::UserBeading >();
    ObjectRegistry::registerConverterFor< SireMol::NullBeading >();
    ObjectRegistry::registerConverterFor< SireMol::BeadStringProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadIntProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadFloatProperty >();
    ObjectRegistry::registerConverterFor< SireMol::BeadVariantProperty >();
    ObjectRegistry::registerConverterFor< SireMol::NullGeometryPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::GeometryPerturbations >();
    ObjectRegistry::registerConverterFor< SireMol::BondPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::AnglePerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::DihedralPerturbation >();
    ObjectRegistry::registerConverterFor< SireMol::Select >();
    ObjectRegistry::registerConverterFor< SireMol::SelectResult >();
    ObjectRegistry::registerConverterFor< SireMol::SelectResultMover >();
    ObjectRegistry::registerConverterFor< SireMol::AmberParameters >();
    ObjectRegistry::registerConverterFor< SireMol::AtomCharges >();
    ObjectRegistry::registerConverterFor< SireMol::AtomForces >();
    ObjectRegistry::registerConverterFor< SireMol::Force3D >();
    ObjectRegistry::registerConverterFor< SireMol::Chain >();
    ObjectRegistry::registerConverterFor< SireMol::Mover<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::Selector<SireMol::Chain> >();
    ObjectRegistry::registerConverterFor< SireMol::Mover< SireMol::Selector<SireMol::Chain> > >();
    ObjectRegistry::registerConverterFor< SireMol::CGAtomIdx >();

}

