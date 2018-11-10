#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>
using namespace eosio;

CONTRACT hello : public eosio::contract {
  public:
      using contract::contract;

      ACTION hi( name user ) {
	      print_f( "Hello % from hello", user );
	  }
};

EOSIO_DISPATCH( hello, (hi) )
