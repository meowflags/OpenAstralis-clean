// sub_2768120
// rva 0x02768120  size 358  section .text  group text
// window base 0x182768120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2768120(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // r9d
  __int64 i; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdi
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rsi
  unsigned int v26; // eax
  char v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+10h] [rbp-28h]
  __int64 v30; // [rsp+18h] [rbp-20h]
  __int64 v31; // [rsp+20h] [rbp-18h]
  int v32; // [rsp+2Ch] [rbp-Ch]
  int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v31 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v5 + 8) )
  {
    v26 = sub_1EB84E0();
LABEL_15:
    sub_2771220(a1: v8, a2: v9, a3: i, a4: i, a5: v26, a6: v17, a7: v28);
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
    return sub_27682A0();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v5 + 32) )
    {
      v6 = sub_1EAA920(a1, a2, a3: 34161576);
      a3 = v31;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 24;
      *(_DWORD *)v6 = 34161576;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    v30 = v6;
    v34 = *(_DWORD *)(a3 + 8);
    sub_5787780(a1, a2, a3: v6, a4, a5: v34);
    if ( v34 != 0 )
    {
      v10 = *(unsigned __int16 *)(v31 + 12);
      v33 = *(unsigned __int16 *)(v31 + 12);
      v11 = sub_C963280(a1: v8, a2: v9, a3: v10);
      v12 = v30;
      ++*(_DWORD *)(v30 + 4);
      v13 = *(unsigned int *)(v12 + 12);
      v14 = v4 + 8LL * *(unsigned int *)(v12 + 8);
      v29 = v11;
      sub_57881C0(a1: v13, a2: v16, a3: v12, a4: v15, a5: v11, a6: v14);
      for ( i = 1; ; i = (unsigned int)(v32 + 1) )
      {
        v26 = v34;
        v7 = v31;
        if ( (int)v34 <= (int)i )
          break;
        if ( v34 <= (unsigned int)i )
          goto LABEL_15;
        v19 = *(unsigned __int16 *)(v31 + 2 * i + 12);
        v33 = *(unsigned __int16 *)(v31 + 2 * i + 12);
        v32 = i;
        v20 = sub_C963280(a1: v8, a2: v9, a3: v19);
        v21 = v30;
        ++*(_DWORD *)(v30 + 4);
        v22 = *(unsigned int *)(v21 + 12);
        v23 = v4 + 8LL * *(unsigned int *)(v21 + 8);
        v29 = v20;
        sub_57881C0(a1: v22, a2: v25, a3: v21, a4: v24, a5: v20, a6: v23);
      }
    }
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280(a1: v8, a2: v9, a3: v7);
    return v30;
  }
}
