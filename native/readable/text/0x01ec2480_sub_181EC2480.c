// sub_1EC2480
// rva 0x01ec2480  size 393  section .text  group text
// window base 0x181ec2480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC2480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 i; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 result; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  char v29; // [rsp+0h] [rbp-38h] BYREF
  __int64 v30; // [rsp+10h] [rbp-28h]
  __int64 v31; // [rsp+18h] [rbp-20h]
  __int64 v32; // [rsp+20h] [rbp-18h]
  __int64 v33; // [rsp+28h] [rbp-10h]
  int v34; // [rsp+30h] [rbp-8h]
  unsigned int v35; // [rsp+34h] [rbp-4h]

  v33 = a5;
  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v7 + 8) )
  {
    v32 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v29);
LABEL_22:
    v32 = a3;
    sub_2771080();
LABEL_23:
    LODWORD(i) = sub_2771080();
LABEL_24:
    sub_2771220(a1: v13, a2: v32, a3: (unsigned int)i, a4: v16, a5: (unsigned int)v16);
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
    return sub_1EC2620();
  }
  v8 = *(_DWORD *)(a3 + 16);
  if ( v8 == -1 )
  {
    v32 = a3;
    result = *(_QWORD *)(v7 + 40);
    v27 = result + 16;
    v28 = 34085384;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v7 + 32) )
    {
      result = sub_1EAA840(a1, a2, a3: 34085384, a4, a5: 0);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v27;
      *(_QWORD *)result = 34085384;
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1, a2, a3: v27, a4, a5: v28);
    return result;
  }
  if ( a5 == v6 )
    goto LABEL_22;
  v32 = a3;
  v9 = (unsigned int)*(char *)(a5 + 69);
  v10 = v6 + 8LL * *(unsigned int *)(v6 + 376650988);
  v35 = v8;
  v11 = sub_1E63960(a1, a2, a3: v8, a4: v9, a5: v10, a6: (unsigned int)v9);
  if ( v11 == v6 )
    goto LABEL_23;
  v31 = v11;
  v16 = *(unsigned int *)(v11 + 8);
  v35 = v16;
  if ( (_DWORD)v16 != 0 )
  {
    v30 = v6 + 8LL * *(unsigned int *)(v11 + 12);
    v17 = sub_4F636E0(a1: v13, a2: v14, a3: v33);
    sub_1EC3DC0(a1: v19, a2: v20, a3: v30, a4: v18, a5: v17);
    for ( i = 1; ; i = (unsigned int)(v34 + 1) )
    {
      v16 = v35;
      v15 = v33;
      if ( (int)v35 <= (int)i )
        break;
      if ( v35 <= (unsigned int)i )
        goto LABEL_24;
      v30 = v6 + 8LL * *(unsigned int *)(v31 + 4 * i + 12);
      v34 = i;
      v22 = sub_4F636E0(a1: v13, a2: v14, a3: v33);
      sub_1EC3DC0(a1: v24, a2: v25, a3: v30, a4: v23, a5: v22);
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280(a1: v13, a2: v14, a3: v12, a4: v16, a5: v15);
  return v31;
}
