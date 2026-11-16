// sub_185054C60
// rva 0x05054c60  size 262  section .text  group text
// window base 0x185054c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185054C60(
        __int64 a1,
        int a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD v15[6]; // [rsp+0h] [rbp-38h] BYREF
  int v16; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v15 <= *(_QWORD *)(v13 + 8) )
  {
    v16 = a2;
    v15[2] = a1;
    v15[3] = a6;
    v15[4] = a5;
    v15[5] = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( (unsigned __int16)*(_DWORD *)(v12
                                        + 8LL * *(unsigned int *)(v12 + 8LL * (*a3 >> 3) + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v12 + 8LL * (*a3 >> 3) + 44)
                                         & (0x1E9Du >> HIBYTE(*(_DWORD *)(v12 + 8LL * (*a3 >> 3) + 44))))
                                        + 12) == 7837 )
  {
    return sub_185054D11(
             a1: a6,
             a2: a1,
             (_DWORD)a3,
             a4: a2,
             a5: (int)v12 + 377214736,
             a6: a5,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
  }
  MEMORY[0x182770780]();
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
  return sub_185054D80();
}
