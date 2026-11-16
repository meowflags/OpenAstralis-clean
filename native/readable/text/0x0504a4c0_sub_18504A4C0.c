// sub_504A4C0
// rva 0x0504a4c0  size 380  section .text  group text
// window base 0x18504a4c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504A4C0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  _DWORD *v10; // rsi
  __int64 v11; // rbp
  _DWORD *v12; // rax
  __int64 (__fastcall *v13)(__int64, _DWORD *, _DWORD *); // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v20; // [rsp+8h] [rbp-30h]
  _DWORD *v21; // [rsp+10h] [rbp-28h]
  _DWORD *v22; // [rsp+18h] [rbp-20h]
  _DWORD *v23; // [rsp+20h] [rbp-18h]
  _DWORD *v24; // [rsp+28h] [rbp-10h]
  unsigned int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    v24 = a6;
    v23 = a5;
    v22 = a3;
    sub_1EB84E0();
    goto LABEL_15;
  }
  if ( a3 == v7 )
  {
    result = 0;
    v24 = a6;
    v23 = a5;
    v22 = a3;
  }
  else
  {
    if ( a5 != v7 )
    {
      if ( a6 != v7 )
      {
        if ( (unsigned __int16)v7[2 * v7[2 * (*a6 >> 3) + 5]
                                + 3
                                + (v7[2 * (*a6 >> 3) + 11] & (0x575u >> HIBYTE(v7[2 * (*a6 >> 3) + 11])))] == 1397 )
        {
          v23 = a5;
          v22 = a3;
          v9 = *a6 >> 3;
          v10 = &v7[2 * v7[2 * v9 + 5]];
          v11 = v7[2 * v9 + 11] & (0x575u >> HIBYTE(v7[2 * v9 + 11]));
          v12 = &v7[2 * v9];
          v13 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v6
                                                                    + *(_QWORD *)((char *)v12 + HIWORD(v10[v11 + 3])));
          v21 = v12;
          v24 = a6;
          v20 = v10;
          v25 = v11;
          v14 = v13(a1, a2: v10, a3: a6);
          if ( (_DWORD *)v14 == v22 )
          {
            v18 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                                      + *(_QWORD *)((char *)v21
                                                                                  + HIWORD(v20[v25 + 3])
                                                                                  + 8)))(
                    a1: v15,
                    a2: v16,
                    a3: v24);
            result = v18 == (_QWORD)v23;
          }
          else
          {
            result = 0;
          }
          goto LABEL_8;
        }
LABEL_16:
        sub_2770780();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        __builtin_debugtrap();
        return sub_504A640();
      }
LABEL_15:
      v23 = a5;
      v22 = a3;
      sub_2771080();
      goto LABEL_16;
    }
    result = 0;
    v24 = a6;
    v23 = a5;
    v22 = a3;
  }
LABEL_8:
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
