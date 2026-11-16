// sub_5043980
// rva 0x05043980  size 2233  section .text  group text
// window base 0x185043980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5043980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *); // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  int v25; // [rsp+24h] [rbp-44h]
  _DWORD *v26; // [rsp+28h] [rbp-40h]
  __int64 v27; // [rsp+30h] [rbp-38h]
  int v28; // [rsp+5Ch] [rbp-Ch]

  v27 = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    while ( 1 )
    {
      v15 = sub_1EB84E0();
      v20 = (unsigned int)v8[2 * v19 + 1];
      if ( (_DWORD)v20 != 0 )
      {
        v21 = (unsigned int)v8[2 * v20 + 2];
        if ( (_DWORD)v21 != 0 )
        {
          v16 = (unsigned int)v8[2 * v21 + 4];
          if ( (_DWORD)v16 != 0 )
          {
            v24 = v15;
            sub_208CCA0(a1: v17, a2: v18, a3: v18, a4: v16, a5: (_DWORD)v16 != 0);
            v15 = v24;
            v18 = v23;
          }
        }
      }
      sub_2769900(a1: v17, a2: v18, a3: v15, a4: v16, a5: &a7);
    }
  }
  result = *(unsigned int *)(v9 + 72);
  if ( (_DWORD)result != 0 )
  {
    v11 = (unsigned int)v8[2 * result + 18];
    if ( (_DWORD)v11 != 0 )
    {
      v12 = &v8[2 * v11];
    }
    else
    {
      result = (__int64)&v8[2 * result];
      v12 = (_DWORD *)result;
    }
  }
  else
  {
    v12 = v8;
  }
  if ( v12 == v8 )
  {
    v26 = v12;
  }
  else
  {
    result = *v12 >> 3;
    if ( SHIWORD(v8[2 * result + 15]) < 4 )
    {
      v26 = v12;
    }
    else
    {
      result = (unsigned int)v8[2 * result + 4];
      if ( v8[2 * result + 6] == 82319 )
      {
        v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)&v8[2 * (*v12 >> 3) + 122]);
        v26 = v12;
        result = v14(a1, a2, a3: v12);
        a3 = v27;
      }
      else
      {
        v26 = v12;
      }
    }
  }
  v13 = *(unsigned int *)(a3 + 136);
  v25 = (unsigned __int64)(a3 - (_QWORD)v8) >> 3;
  if ( (unsigned int)v13 <= 0x11 )
    __asm { jmp     rax; switch jump }
  v28 = v13;
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280();
  return result;
}
