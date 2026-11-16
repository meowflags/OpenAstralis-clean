// sub_184F215A0
// rva 0x04f215a0  size 650  section .text  group text
// window base 0x184f215a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F215A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  int v18; // r9d
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 (__fastcall *v21)(__int64, _QWORD, __int64, __int64, __int64); // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  char v32; // [rsp+0h] [rbp-48h] BYREF
  __int64 v33; // [rsp+10h] [rbp-38h]
  __int64 v34; // [rsp+18h] [rbp-30h]
  __int64 v35; // [rsp+20h] [rbp-28h]
  unsigned int v36; // [rsp+2Ch] [rbp-1Ch]
  int v37; // [rsp+30h] [rbp-18h]
  unsigned int v38; // [rsp+34h] [rbp-14h]
  unsigned int v39; // [rsp+38h] [rbp-10h]
  unsigned int v40; // [rsp+3Ch] [rbp-Ch]
  __int64 v41; // [rsp+40h] [rbp-8h]

  v35 = a3;
  v34 = a5;
  v40 = a1;
  if ( (unsigned __int64)&v32 <= *(_QWORD *)(v9 + 8) )
  {
    v39 = a6;
    MEMORY[0x181EB84E0]();
    goto LABEL_24;
  }
  v39 = a6;
  sub_184F21320(a1, a2, a3, a4, a5, a6, a7: v32);
  if ( v34 == v8 )
  {
LABEL_24:
    v27 = v40;
    v28 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v28 + 48) > *(_QWORD *)(v9 + 32) )
      goto LABEL_29;
    *(_QWORD *)(v9 + 40) = v28 + 48;
    *(_DWORD *)v28 = 34101256;
    *(_DWORD *)(v28 + 4) = 0;
    *(_QWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 16) = 0;
    *(_QWORD *)(v28 + 24) = 0;
    *(_QWORD *)(v28 + 32) = 0;
    *(_QWORD *)(v28 + 40) = 0;
    goto LABEL_26;
  }
  v38 = *(_DWORD *)(v34 + 8);
  MEMORY[0x186329C40](a1: v8, a2: v11, a3: v39, a4: v10, a5: v40, a6: v38);
  v14 = v40;
  if ( v40 != 0 )
  {
    v15 = v35;
    v16 = *(unsigned int *)(v35 + 8);
    if ( (_DWORD)v16 == 0 )
      goto LABEL_27;
    v17 = *(_DWORD *)(v35 + 12);
    v18 = *(_DWORD *)(v8 + 8 * v16 + 8) - v17;
    if ( v18 < 1 )
    {
      v38 = *(_DWORD *)(v8 + 8 * v16 + 8) - v17;
      v19 = v39;
    }
    else
    {
      if ( v18 < (int)v40 )
        JUMPOUT(0x309E37636LL);
      v37 = *(_DWORD *)(v35 + 12);
      v36 = v40;
      MEMORY[0x181EB4960](a1: v39, a2: v40, a3: v8 + 8 * v16, a4: v12, a5: v17, a6: v34);
      v15 = v35;
      *(_DWORD *)(v35 + 12) = v37 + v36;
      v19 = v36 + v39;
      v14 = v40 - v36;
      v41 = v7;
      v38 = v36;
    }
    if ( (int)v14 < 1 )
    {
      v36 = v14;
      v40 = v19;
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v14, a2: v13, a3: v15, a4: v38);
      return v38;
    }
    else
    {
      v20 = *(unsigned int *)(v15 + 4);
      if ( (_DWORD)v20 == 0 )
      {
        while ( 1 )
        {
          MEMORY[0x182771080](a1: v14, a2: v13, a3: v15, a4: v38, a5: v34, a6: v19);
LABEL_29:
          v28 = MEMORY[0x181EAA920](a1: v27, a2: v11, a3: 34101256);
LABEL_26:
          *(_DWORD *)(v28 + 20) = 46923644;
          *(_DWORD *)(v28 + 16) = *(_DWORD *)(v8 + 374343896);
          *(_DWORD *)(v28 + 12) = (unsigned __int64)(v28 - v8) >> 3;
          v33 = v28;
          MEMORY[0x18503B9A0](a1: v27, a2: v11, a3: v28, a4: v10, a5: 0);
          MEMORY[0x182769900](a1: v30, a2: v31, a3: v33, a4: v29, a5: &a7);
LABEL_27:
          MEMORY[0x182771080]();
        }
      }
      v21 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64))(v7
                                                                               + *(_QWORD *)(v8
                                                                                           + 8LL
                                                                                           * (*(_DWORD *)(v8 + 8 * v20) >> 3)
                                                                                           + 160));
      v40 = v19;
      v36 = v14;
      v22 = v21(a1: v14, a2: (unsigned int)v14, a3: v8 + 8 * v20, a4: v12, a5: v34);
      if ( *(int *)(v9 + 16) <= 0 )
        v22 = MEMORY[0x18277F280](a1: v24, a2: v25, a3: v23, a4: v38);
      if ( v22 == -1 )
      {
        if ( v38 != 0 )
          JUMPOUT(0x309E37742LL);
        return 0xFFFFFFFFLL;
      }
      else
      {
        return v38 + v22;
      }
    }
  }
  else
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v40, a2: v13, a3: v35);
    return 0;
  }
}
