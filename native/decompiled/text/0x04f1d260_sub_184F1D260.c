// sub_184F1D260
// rva 0x04f1d260  size 223  section .text  group text
// window base 0x184f1d260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1D260(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, unsigned int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 (__fastcall *v12)(__int64, __int64, _DWORD *); // rax
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  _DWORD *v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return ((__int64 (*)(void))sub_184F1D340)();
  }
  else
  {
    if ( a5 == v7 )
    {
      v16 = a6;
      v15 = a5;
      v14 = a3;
      v10 = (__int64)(v7 + 94089892);
    }
    else
    {
      v9 = *a5 >> 3;
      if ( SHIWORD(v7[2 * v9 + 15]) < 4 )
      {
        v10 = (__int64)(v7 + 94089892);
        v16 = a6;
        v15 = a5;
        v14 = a3;
      }
      else if ( v7[2 * v7[2 * v9 + 4] + 6] == 87998 )
      {
        v16 = a6;
        v14 = a3;
        v12 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a5 >> 3) + 60]);
        v15 = a5;
        v10 = v12(a1, a2, a3: a5);
      }
      else
      {
        v10 = (__int64)(v7 + 94089892);
        v16 = a6;
        v15 = a5;
        v14 = a3;
      }
    }
    result = sub_184F1D340(a1: v10, a2, a3: v14, a4, a5: v15, a6: v16);
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
