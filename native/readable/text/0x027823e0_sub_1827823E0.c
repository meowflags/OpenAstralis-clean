// sub_27823E0
// rva 0x027823e0  size 122  section .text  group text
// window base 0x1827823e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27823E0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, _DWORD *a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+10h] [rbp-18h]
  _DWORD *v16; // [rsp+18h] [rbp-10h]
  __int64 v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_2782460();
  }
  else
  {
    v8 = *a5 >> 3;
    if ( *(__int16 *)(v6 + 8 * v8 + 62) >= 3
      && *(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v8 + 16) + 20) == 19923 )
    {
      v17 = a6;
      v16 = a5;
      v15 = a3;
      result = sub_27820E0(a1, a2, a3, a4, (__int64)a5, a6);
    }
    else
    {
      v17 = a6;
      v16 = a5;
      v15 = a3;
      result = sub_2782340(a1, a2, a3, a4: (int)a5, (__int64)a5, a6);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v12, a2: v13, a3: v10, a4: v11);
  }
  return result;
}
