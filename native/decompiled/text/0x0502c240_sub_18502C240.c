// sub_18502C240
// rva 0x0502c240  size 1181  section .text  group text
// window base 0x18502c240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502C240(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rcx
  unsigned int v24; // ebp
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rbx
  __int64 v29; // rsi
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // [rsp+0h] [rbp-38h] BYREF
  __int64 v41; // [rsp+8h] [rbp-30h]
  _DWORD *v42; // [rsp+10h] [rbp-28h]
  int v43; // [rsp+1Ch] [rbp-1Ch]
  __int64 v44; // [rsp+20h] [rbp-18h]
  int v45; // [rsp+2Ch] [rbp-Ch]
  int v46; // [rsp+30h] [rbp-8h]
  unsigned int v47; // [rsp+34h] [rbp-4h]

  v44 = a3;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v9 + 8) )
  {
    v10 = MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  v10 = *(_DWORD *)(v8 + 374343896);
  if ( a3 == v8 )
  {
LABEL_21:
    v31 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v31 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v43 = v10;
      v31 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
      v10 = v43;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v31 + 48;
      *(_DWORD *)v31 = 34101256;
      *(_DWORD *)(v31 + 4) = 0;
      *(_QWORD *)(v31 + 8) = 0;
      *(_QWORD *)(v31 + 16) = 0;
      *(_QWORD *)(v31 + 24) = 0;
      *(_QWORD *)(v31 + 32) = 0;
      *(_QWORD *)(v31 + 40) = 0;
    }
    *(_DWORD *)(v31 + 20) = 46923644;
    *(_DWORD *)(v31 + 16) = v10;
    *(_DWORD *)(v31 + 12) = (unsigned __int64)(v31 - v8) >> 3;
    v42 = (_DWORD *)v31;
    sub_18503B9A0(a1, a2, a3: v31, a4, a5: 0);
    v35 = (unsigned __int64)v42;
    goto LABEL_24;
  }
  v11 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v11 == 0 )
    goto LABEL_25;
  v12 = *(_DWORD *)(v8 + 8 * v11 + 8);
  if ( v12 != 0 )
  {
    v7 = *(char *)(a3 + 12);
    v13 = (v12 >> *(_BYTE *)(a3 + 12)) + 4;
    v14 = 34082880;
    v15 = 34082880;
    if ( (int)v13 < 0 )
      goto LABEL_26;
    v16 = v7;
    v17 = (unsigned int)((_DWORD)v13 << v7);
    if ( (int)v17 < 0 )
    {
      v46 = v17;
      v47 = v7;
      v38 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v38 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v43 = v10;
        v38 = MEMORY[0x181EAA920](a1: 34082880, a2: v17, a3: 34082880);
        v10 = v43;
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v38 + 40;
        *(_DWORD *)v38 = 34082880;
        *(_DWORD *)(v38 + 4) = 0;
        *(_QWORD *)(v38 + 8) = 0;
        *(_QWORD *)(v38 + 16) = 0;
        *(_QWORD *)(v38 + 24) = 0;
        *(_QWORD *)(v38 + 32) = 0;
      }
      *(_DWORD *)(v38 + 20) = 46923644;
      *(_DWORD *)(v38 + 16) = v10;
      *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - v8) >> 3;
      v42 = (_DWORD *)v38;
      sub_18503B9A0(a1: v15, a2: v17, a3: v38, a4: v16, a5: 0);
      v39 = (unsigned __int64)v42;
      v42[2] = 46004603;
      if ( (*(_DWORD *)v39 & 2) != 0 )
      {
        v32 = (v39 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v32) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v39 & 0xFFFFFFFFFFF80000LL) + ((v39 - v32) >> 9) + 0x38) = 0;
        v35 = v39;
      }
      else
      {
        v35 = v39;
      }
      goto LABEL_24;
    }
    v18 = *(_QWORD *)(v9 + 40);
    v19 = *(_QWORD *)(v9 + 32);
    v20 = ((unsigned int)v17 + 19LL) & 0x1FFFFFFF8LL;
    if ( v20 >= 0x20000 || (v20 += v18, v20 > v19) )
    {
      v46 = v17;
      v47 = v7;
      v42 = (_DWORD *)(v8 + 60267768);
      v18 = MEMORY[0x181EAA840](a1: v20, a2: v17, a3: 34082368, a4: v7, a5: (unsigned int)v17, a6: v19);
      v7 = v47;
      a3 = v44;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v20;
      *(_QWORD *)v18 = 34082368;
      *(_DWORD *)(v18 + 8) = v17;
      v46 = v17;
      v42 = (_DWORD *)(v8 + 60267768);
    }
    v47 = v7;
    v41 = v18;
    MEMORY[0x184FF2C40](a1: v7, a2: v17, a3, a4: v18, a5: v18, a6: 0);
    v23 = *(unsigned int *)(v44 + 4);
    if ( (_DWORD)v23 == 0 )
    {
      MEMORY[0x182771080](a1: v21, a2: v22, a3: v44, a4: v23, a5: v41);
      while ( 1 )
      {
        v32 = (v37 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v32) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v37 & 0xFFFFFFFFFFF80000LL) + ((v37 - v32) >> 9) + 0x38) = 0;
        v35 = v37;
LABEL_24:
        while ( 1 )
        {
          MEMORY[0x182769900](a1: v33, a2: v34, a3: v35, a4: v32, a5: &a7);
LABEL_25:
          v10 = MEMORY[0x182771080]();
LABEL_26:
          v47 = v7;
          v36 = *(_QWORD *)(v9 + 40);
          if ( (unsigned __int64)(v36 + 40) > *(_QWORD *)(v9 + 32) )
          {
            v46 = v13;
            v43 = v10;
            v36 = MEMORY[0x181EAA920](a1: v15, a2: v13, a3: v15);
            v10 = v43;
          }
          else
          {
            *(_QWORD *)(v9 + 40) = v36 + 40;
            *(_DWORD *)v36 = 34082880;
            *(_DWORD *)(v36 + 4) = 0;
            *(_QWORD *)(v36 + 8) = 0;
            *(_QWORD *)(v36 + 16) = 0;
            *(_QWORD *)(v36 + 24) = 0;
            *(_QWORD *)(v36 + 32) = 0;
            v46 = v13;
          }
          *(_DWORD *)(v36 + 20) = 46923644;
          *(_DWORD *)(v36 + 16) = v10;
          *(_DWORD *)(v36 + 12) = (unsigned __int64)(v36 - v8) >> 3;
          v42 = (_DWORD *)v36;
          sub_18503B9A0(a1: v15, a2: v13, a3: v36, a4: v14, a5: 0);
          v37 = (unsigned __int64)v42;
          v42[2] = 46004603;
          if ( (*(_DWORD *)v37 & 2) != 0 )
            break;
          v35 = v37;
        }
      }
    }
    MEMORY[0x184FF2C40](
      a1: v47,
      a2: v22,
      a3: v42,
      a4: (unsigned int)*(char *)(v44 + 12),
      a5: v41,
      a6: (unsigned int)(*(_DWORD *)(v8 + 8 * v23 + 8) >> *(_BYTE *)(v44 + 12)));
    v24 = v47;
    v25 = 0;
    v26 = v41;
    v27 = 0;
  }
  else
  {
    v27 = *(unsigned __int8 *)(v8 + 60267781);
    v26 = v8 + 377212552;
    v24 = 0;
    v25 = 1469942;
  }
  v28 = *(_QWORD *)(v9 + 40);
  v29 = v28 + 24;
  if ( (unsigned __int64)(v28 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v47 = v24;
    v46 = v25;
    v41 = v26;
    v45 = v27;
    v28 = MEMORY[0x181EAA920](a1, a2: v29, a3: 34082680);
    LOBYTE(v24) = v47;
    v25 = v46;
    v26 = v41;
    LOBYTE(v27) = v45;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v29;
    *(_DWORD *)v28 = 34082680;
    *(_DWORD *)(v28 + 4) = 0;
    *(_QWORD *)(v28 + 8) = 0;
    *(_QWORD *)(v28 + 16) = 0;
  }
  *(_BYTE *)(v28 + 13) = v27;
  *(_BYTE *)(v28 + 12) = v24;
  *(_DWORD *)(v28 + 8) = v25;
  *(_DWORD *)(v28 + 4) = (unsigned __int64)(v26 - v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v28;
}
