// sub_2749700
// rva 0x02749700  size 179  section .text  group text
// window base 0x182749700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2749700(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64))
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_17;
  if ( a5 != v6 && *(_DWORD *)(a5 + 8) == 1 )
  {
    v8 = *(unsigned int *)(a5 + 12);
    if ( (_DWORD)v8 != 0 )
    {
      v9 = *(_DWORD *)(v6 + 8 * v8) >> 3;
      switch ( v9 )
      {
        case 4260808:
          v10 = *(unsigned int *)(v6 + 8 * v8 + 4);
          goto LABEL_7;
        case 4288437:
          v10 = (unsigned int)*(char *)(v6 + 8 * v8 + 4);
          goto LABEL_7;
        case 4288459:
          v10 = (unsigned int)*(__int16 *)(v6 + 8 * v8 + 4);
          goto LABEL_7;
        case 4288481:
          v10 = *(unsigned __int16 *)(v6 + 8 * v8 + 4);
LABEL_7:
          result = a6(a1, a2, a3: v10);
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v13, a2: v14, a3: v12);
          return result;
        default:
          break;
      }
    }
  }
  sub_2757000(a1, a2, a3: a5);
LABEL_17:
  sub_1EB84E0();
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
  __builtin_debugtrap();
  return sub_27497C0();
}
