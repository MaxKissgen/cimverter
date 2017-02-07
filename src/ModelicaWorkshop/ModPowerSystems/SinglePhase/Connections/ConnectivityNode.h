/*
 * ConnectivityNode.h
 *
 */

#ifndef SRC_MODELICAWORKSHOP_MODPOWERSYSTEMS_SINGLEPHASE_CONNECTIONS_CONNECTIVITYNODE_H_
#define SRC_MODELICAWORKSHOP_MODPOWERSYSTEMS_SINGLEPHASE_CONNECTIONS_CONNECTIVITYNODE_H_

#include "../../../ModBaseClass.h"

using namespace ModelicaWorkshop;

namespace ModPowerSystems {

namespace SinglePhase {

namespace Connections {

class ConnectivityNode : public ModBaseClass {
 public:
  ConnectivityNode();
  ConnectivityNode(const ConnectivityNode &);
  ConnectivityNode& operator=(const ConnectivityNode &);

  virtual ~ConnectivityNode();

  void set_Vnom(double Vnom) {
    this->_Vnom = Vnom;
  };
  double Vnom() const {
    return _Vnom;
  };

  bool set_template_values(ctemplate::TemplateDictionary *dictionary) override;

 private:
  double _Vnom = 110000;
};

} /* namespace Connections */

} /* namespace SinglePhase */

} /* namespace ModPowerSystems */

#endif /* SRC_MODELICAWORKSHOP_MODPOWERSYSTEMS_SINGLEPHASE_CONNECTIONS_CONNECTIVITYNODE_H_ */
