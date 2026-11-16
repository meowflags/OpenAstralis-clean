// sub_4F24380
// rva 0x04f24380  size 439  section .text  group text
// window base 0x184f24380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F24380(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // edx
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+8h] [rbp-40h]
  __int64 v24; // [rsp+10h] [rbp-38h]
  _DWORD *v25; // [rsp+18h] [rbp-30h]
  int v26; // [rsp+20h] [rbp-28h]
  int v27; // [rsp+24h] [rbp-24h]
  int v28; // [rsp+28h] [rbp-20h]
  int v29; // [rsp+2Ch] [rbp-1Ch]
  __int64 (__fastcall *v30)(__int64, _QWORD, _DWORD *, _DWORD *); // [rsp+30h] [rbp-18h]
  unsigned int v31; // [rsp+38h] [rbp-10h]
  int v32; // [rsp+3Ch] [rbp-Ch]
  __int64 v33; // [rsp+40h] [rbp-8h]

  v25 = a3;
  v24 = a5;
  v32 = a6;
  v31 = a1;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    LODWORD(result) = sub_1EB84E0();
    goto LABEL_15;
  }
  v30 = (__int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 152));
  result = v30(a1, a2: (unsigned int)a1, a3, a4: a3);
  if ( (int)result < 0 )
  {
LABEL_15:
    v29 = result;
    v28 = 0;
    goto LABEL_16;
  }
  v13 = v31;
  if ( (int)v31 > (int)result )
  {
    while ( 1 )
    {
      v27 = result;
      v15 = ((__int64 (__fastcall *)(_QWORD, _DWORD *, _DWORD *, __int64 (__fastcall *)(__int64, _QWORD, _DWORD *, _DWORD *), __int64, _QWORD))v30)(
              a1: (unsigned int)(v13 - result),
              a2: v25,
              a3: v25,
              a4: v30,
              a5: v24,
              a6: (unsigned int)(result + v32));
      if ( v15 < 0 )
      {
        while ( 1 )
        {
          v29 = v15;
          v33 = v7;
          v28 = v27;
LABEL_16:
          v17 = v31;
          v18 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v18 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v18 = sub_1EAA920(a1: v31, a2: v12, a3: 34152272);
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v18 + 40;
            *(_DWORD *)v18 = 34152272;
            *(_DWORD *)(v18 + 4) = 0;
            *(_QWORD *)(v18 + 8) = 0;
            *(_QWORD *)(v18 + 16) = 0;
            *(_QWORD *)(v18 + 24) = 0;
            *(_QWORD *)(v18 + 32) = 0;
          }
          *(_DWORD *)(v18 + 20) = 46923644;
          *(_DWORD *)(v18 + 16) = *(_DWORD *)(v8 + 374343896);
          *(_DWORD *)(v18 + 12) = (unsigned __int64)(v18 - v8) >> 3;
          v23 = v18;
          sub_503B9A0(a1: v17, a2: v12, a3: v18, a4: v11, a5: 0);
          v15 = sub_2769900(a1: v20, a2: v21, a3: v23, a4: v19, a5: &a7);
        }
      }
      v13 = v31;
      v16 = v27 + v15;
      if ( (int)v31 <= v27 + v15 )
        break;
      if ( *(int *)(v9 + 16) <= 0 )
        sub_277F280();
      LODWORD(result) = v16;
    }
    v26 = v27 + v15;
    v14 = (unsigned int)v15;
    result = (unsigned int)(v27 + v15);
  }
  else
  {
    v14 = (unsigned int)result;
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return sub_277F280(a1: v13, a2: v12, a3: v14);
  return result;
}
