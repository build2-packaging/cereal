#ifndef CEREAL_EXTERNAL_BASE64_HPP_
#define CEREAL_EXTERNAL_BASE64_HPP_

#include <cpp-base64/base64.h>

namespace cereal
{
  namespace base64
  {
    inline std::string encode( unsigned char const* bytes_to_encode, size_t in_len )
    {
      return ::base64_encode( bytes_to_encode, in_len );
    }

    inline std::string decode( std::string const& encoded_string )
    {
      return ::base64_decode( encoded_string );
    }
  } // namespace base64
} // namespace cereal

#endif // CEREAL_EXTERNAL_BASE64_HPP_
