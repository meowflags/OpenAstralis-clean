// sub_185039180
// rva 0x05039180  size 1119  section .text  group text
// window base 0x185039180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_185039180(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r13
  _DWORD *v4; // r14
  __int64 v5; // r15
  __int64 v6; // rax
  _DWORD *v7; // rcx
  int v8; // ebx
  unsigned int v9; // ebp
  __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 i; // rax
  __int64 v14; // rsi
  __int64 v15; // r9
  __int64 (__fastcall *v16)(unsigned __int64, __int64, _DWORD *, _DWORD *, __int64); // rax
  _DWORD *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // ebp
  __int64 v23; // rdx
  unsigned int v24; // r8d
  unsigned __int64 v25; // rcx
  unsigned int v26; // r10d
  unsigned int v27; // esi
  unsigned __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // r8
  unsigned __int64 v34; // rdx
  __int64 v35; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v36; // [rsp+Ch] [rbp-3Ch]
  _DWORD *v37; // [rsp+10h] [rbp-38h]
  __int64 v38; // [rsp+18h] [rbp-30h]
  _DWORD *v39; // [rsp+20h] [rbp-28h]
  _DWORD *v40; // [rsp+28h] [rbp-20h]
  int v41; // [rsp+34h] [rbp-14h]
  unsigned int v42; // [rsp+38h] [rbp-10h]
  unsigned int v43; // [rsp+3Ch] [rbp-Ch]
  unsigned int v44; // [rsp+40h] [rbp-8h]
  unsigned int v45; // [rsp+44h] [rbp-4h]

  v40 = (_DWORD *)a3;
  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_53;
  }
  v6 = *(unsigned int *)(a3 + 4);
  v7 = &v4[2 * v6];
  v39 = v7;
  if ( (_DWORD)v6 == 0 )
  {
LABEL_53:
    MEMORY[0x182771080]();
LABEL_54:
    MEMORY[0x182770E80](a1, a2, a3: v44);
LABEL_55:
    v41 = v14;
    MEMORY[0x182771220](a1: v11, a2: v43, a3: (unsigned int)v14, a4: v7, a5: v45);
    goto LABEL_56;
  }
  v8 = v4[2 * v6 + 2];
  v45 = v8;
  v9 = 2 * v8;
  v44 = 2 * v8;
  if ( (v8 & 0x40000000) != 0 )
    goto LABEL_54;
  v10 = *(_QWORD *)(v5 + 40);
  v11 = (4LL * v9 + 19) & 0x7FFFFFFF8LL;
  v12 = 43307208;
  if ( v11 >= 0x20000 || v10 + v11 > *(_QWORD *)(v5 + 32) )
  {
    v38 = MEMORY[0x181EAA840](a1: v11, a2: v10, a3: 43307208, a4: v7, a5: v9);
    v8 = v45;
    v7 = v39;
    a3 = (unsigned __int64)v40;
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v10 + v11;
    *(_QWORD *)v10 = 43307208;
    *(_DWORD *)(v10 + 8) = v9;
    *(_DWORD *)(v10 + 12) = 0;
    if ( v11 - 16 >= 0x800 )
    {
      memset((void *)(v10 + 16), 0, v11 - 16);
      v11 += v10;
      v7 = v39;
    }
    else
    {
      for ( i = 16; v11 > i; i += 8LL )
        *(_QWORD *)(v10 + i) = 0;
    }
    v38 = v10;
  }
  v14 = 0;
  v43 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_12:
      if ( v8 <= (int)v14 )
      {
        v41 = v14;
        v27 = v43;
        v28 = (unsigned __int64)v40;
        v29 = v8;
        v30 = v38;
        result = (unsigned int)(4 * v29 / 3);
        v40[3] = result;
        *(_DWORD *)(v28 + 8) = v27;
        *(_DWORD *)(v28 + 4) = (unsigned __int64)(v30 - (_QWORD)v4) >> 3;
        if ( (*(_DWORD *)v28 & 2) != 0 )
        {
LABEL_47:
          v32 = v28;
          v33 = v28 & 0xFFFFFFFFFFF80000LL;
          result = (v28 & 0xFFFFFFFFFFF80000LL) + 2112;
          v34 = (v28 - result) >> 9;
          if ( *(_BYTE *)(v33 + v34 + 56) != 0 )
            *(_BYTE *)(v33 + v34 + 56) = 0;
        }
        else
        {
          v32 = v28;
        }
        if ( *(int *)(v5 + 16) <= 0 )
          return MEMORY[0x18277F280](a1: v32);
        return result;
      }
      if ( v8 <= (unsigned int)v14 )
        goto LABEL_55;
      v15 = (unsigned int)v7[v14 + 3];
      if ( (_DWORD)v15 != 0 )
        break;
      v42 = v14 + 1;
      v41 = v14;
      if ( *(int *)(v5 + 16) <= 0 )
      {
        MEMORY[0x18277F280](a1: v11, a2: v14, a3, a4: v7, a5: v12);
        v14 = v26;
        v8 = v45;
      }
      else
      {
        v14 = v42;
      }
      v7 = v39;
    }
    v42 = v14 + 1;
    v41 = v14;
    v16 = (__int64 (__fastcall *)(unsigned __int64, __int64, _DWORD *, _DWORD *, __int64))(v3
                                                                                         + *(_QWORD *)&v4[2 * (v4[2 * v15] >> 3) + 38]);
    v37 = &v4[2 * v15];
    v36 = v15;
    v17 = (_DWORD *)v16(a1: v11, a2: v14, a3: v37, a4: v7, a5: v12);
    if ( v17 != v4 )
    {
      v19 = *v17 >> 3;
      if ( SHIWORD(v4[2 * v19 + 15]) < 2 || (a3 = (unsigned int)v4[2 * v19 + 4], v4[2 * a3 + 4] != 4075) )
      {
        MEMORY[0x18276FC00](a1: v40, a2: v43, a3: v17, a4: v45, a5: v4 + 8528392);
        goto LABEL_47;
      }
    }
    if ( v17 != v4 )
      break;
    v4[2 * v36 + 5] = 0;
    v14 = v42;
    v8 = v45;
    v7 = v39;
  }
  v20 = v17[1] & (v44 - 1);
  v21 = v38;
  v22 = v44;
  while ( v22 > (unsigned int)v20 )
  {
    if ( *(_DWORD *)(v21 + 4 * v20 + 12) == 0 )
    {
      *(_DWORD *)(v21 + 4 * v20 + 12) = v36;
      a3 = *(unsigned int *)v21;
      v12 = v43 + 1;
      if ( (a3 & 2) != 0 )
      {
        if ( (a3 & 1) != 0 )
        {
          a3 = v21 - *(_QWORD *)(v21 - 8);
          v25 = (unsigned __int64)(4 * v20 + 12) >> 9;
          if ( *(_BYTE *)(a3 + v25 + 48) != 0 )
            *(_BYTE *)(a3 + v25 + 48) = 0;
          v14 = v42;
          v43 = v12;
          v8 = v45;
          v7 = v39;
        }
        else
        {
          a3 = v21 & 0xFFFFFFFFFFF80000LL;
          if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - ((v21 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - ((v21 & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9) + 0x38) = 0;
          v14 = v42;
          v43 = v12;
          v8 = v45;
          v7 = v39;
        }
      }
      else
      {
        v14 = v42;
        ++v43;
        v8 = v45;
        v7 = v39;
      }
      goto LABEL_12;
    }
    v23 = (unsigned int)(v20 + 1);
    if ( v22 <= (int)v23 )
      JUMPOUT(0x30A054340LL);
    v24 = v20 + 1;
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v11, a2: v18, a3: v23, a4: v20, a5: (unsigned int)v23);
    v20 = v24;
  }
LABEL_56:
  MEMORY[0x182771220](a1: v11, a2: v43, a3: (unsigned int)v20, a4: v20, a5: v44);
  __builtin_debugtrap();
  return sub_1850395E0();
}
