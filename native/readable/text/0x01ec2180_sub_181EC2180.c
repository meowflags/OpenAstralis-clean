// sub_1EC2180
// rva 0x01ec2180  size 751  section .text  group text
// window base 0x181ec2180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC2180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 i; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  unsigned int v20; // r11d
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r9
  char v26; // [rsp+0h] [rbp-58h] BYREF
  __int64 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+10h] [rbp-48h]
  __int64 v29; // [rsp+18h] [rbp-40h]
  __int64 v30; // [rsp+20h] [rbp-38h]
  int v31; // [rsp+2Ch] [rbp-2Ch]
  unsigned int v32; // [rsp+30h] [rbp-28h]
  unsigned int v33; // [rsp+34h] [rbp-24h]
  unsigned int v34; // [rsp+38h] [rbp-20h]
  unsigned int v35; // [rsp+3Ch] [rbp-1Ch]
  __int64 v36; // [rsp+40h] [rbp-18h]
  unsigned int v37; // [rsp+48h] [rbp-10h]
  int v38; // [rsp+4Ch] [rbp-Ch]
  int v39; // [rsp+50h] [rbp-8h]
  int v40; // [rsp+54h] [rbp-4h]

  v30 = a3;
  v29 = a6;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    v39 = a5;
    v24 = sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v26);
LABEL_32:
    sub_2771220(a1, a2, a3: (unsigned int)i, a4: a3, a5: v24, a6: v25);
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
    return sub_1EC2480();
  }
  v40 = *(_DWORD *)(a3 + 8);
  if ( v40 == 0 )
  {
    v39 = a5;
LABEL_11:
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return 1;
  }
  v9 = *(_DWORD *)(a3 + 12);
  v38 = a5 & 0xFFFFFF;
  v10 = BYTE3(a5);
  v37 = BYTE3(a5);
  v11 = (v9 >> SBYTE3(a5)) & a5 & 0xFFFFFF;
  v12 = (unsigned int)(v11 + 128);
  v36 = 34086464;
  if ( (unsigned int)v12 >= 0x100 )
  {
    v13 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v13 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v35 = (v9 >> SBYTE3(a5)) & a5 & 0xFFFFFF;
      v34 = v9;
      v39 = a5;
      v13 = sub_1EAA920(a1: v13, a2: v10, a3: v36);
      v11 = v35;
      v10 = v37;
      v9 = v34;
      a6 = v29;
      LODWORD(a5) = v39;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v13 + 16;
      *(_DWORD *)v13 = 34086464;
      *(_DWORD *)(v13 + 4) = 0;
      *(_QWORD *)(v13 + 8) = 0;
    }
    *(_DWORD *)(v13 + 4) = v11;
  }
  else
  {
    v13 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v12 + 376353204);
  }
  v35 = v11;
  v34 = v9;
  v39 = a5;
  v28 = v13;
  if ( (unsigned int)sub_AF0FB80(a1: v13, a2: v10, a3: a6, a4: v11, a5: v13) == 0 )
  {
    v27 = v7 + 376657944;
    sub_AF11E40(a1: v28, a2: v17, a3: v29, a4: v15, a5: v28, a6: v7 + 376657944);
    for ( i = 1; ; i = (unsigned int)(v31 + 1) )
    {
      a2 = v37;
      v24 = v40;
      v25 = v29;
      a3 = v30;
      if ( v40 <= (int)i )
        break;
      if ( v40 <= (unsigned int)i )
        goto LABEL_32;
      v20 = *(_DWORD *)(v30 + 4 * i + 12);
      v21 = v38 & (v20 >> v37);
      v22 = (unsigned int)(v21 + 128);
      if ( (unsigned int)v22 >= 0x100 )
      {
        v23 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v23 + 16) > *(_QWORD *)(v8 + 32) )
        {
          v33 = v38 & (*(_DWORD *)(v30 + 4 * i + 12) >> v37);
          v32 = v20;
          v31 = i;
          v23 = sub_1EAA920(a1, a2: v37, a3: v36);
          v21 = v33;
          v20 = v32;
          LODWORD(i) = v31;
          a2 = v37;
          v25 = v29;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v23 + 16;
          *(_DWORD *)v23 = 34086464;
          *(_DWORD *)(v23 + 4) = 0;
          *(_QWORD *)(v23 + 8) = 0;
        }
        *(_DWORD *)(v23 + 4) = v21;
      }
      else
      {
        v23 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v22 + 376353204);
      }
      v33 = v21;
      v32 = v20;
      v31 = i;
      v28 = v23;
      if ( (unsigned int)sub_AF0FB80(a1, a2, a3: v25, a4: v23, a5: v23) != 0 )
      {
        v18 = v33;
        goto LABEL_7;
      }
      sub_AF11E40(a1: v16, a2: v17, a3: v29, a4: v28, a5: v28, a6: v27);
    }
    goto LABEL_11;
  }
  v18 = v35;
LABEL_7:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v16, a2: v17, a3: v14, a4: v18);
  return 0;
}
