// sub_1596320
// rva 0x01596320  size 276  section .text  group text
// window base 0x181596320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1596320(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 v6; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi

  switch ( a1 )
  {
    case 2LL:
      return sub_1596440(a1: 2, a2, a3, a4: a5);
    case 4LL:
      if ( a5 > a3 )
      {
        result = a3;
        while ( a6 != 0 )
        {
          *(_DWORD *)(a5 + a6 - 4) = __builtin_bswap32(*(_DWORD *)(a3 + a6 - 4));
          a6 -= 4LL;
        }
      }
      else
      {
        v8 = 0;
        result = a3;
        while ( a6 > v8 )
        {
          *(_DWORD *)(a5 + v8) = __builtin_bswap32(*(_DWORD *)(a3 + v8));
          v8 += 4LL;
        }
      }
      break;
    case 8LL:
      if ( a5 > a3 )
      {
        result = a3;
        while ( a6 != 0 )
        {
          *(_QWORD *)(a5 + a6 - 8) = __builtin_bswap64(*(_QWORD *)(a3 + a6 - 8));
          a6 -= 8LL;
        }
      }
      else
      {
        for ( result = 0; a6 > result; result += 8LL )
          *(_QWORD *)(a5 + result) = __builtin_bswap64(*(_QWORD *)(a3 + result));
      }
      break;
    default:
      sub_28C1C40(a1, a2, a3: v6 + 360914440);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_1596440(a1: v11, a2: v12, a3: v9, a4: v10);
  }
  return result;
}
