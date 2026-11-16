// sub_18501C2A0
// rva 0x0501c2a0  size 702  section .text  group text
// window base 0x18501c2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501C2A0(
        int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  unsigned int v14; // ecx
  __int64 result; // rax
  int v16; // edi
  int v17; // esi
  int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // ebx
  unsigned int *v25; // rdx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned int v30; // ecx
  __int64 v31; // rdi
  signed int v32; // ebx
  __int64 v33; // rcx
  unsigned int *v34; // rdx
  __int64 v35; // rbp
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // r8
  __int64 v39; // rsi
  char v40; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v41; // [rsp+Ch] [rbp-2Ch]
  __int64 v42; // [rsp+10h] [rbp-28h]
  unsigned int *v43; // [rsp+18h] [rbp-20h]
  __int64 v44; // [rsp+20h] [rbp-18h]
  signed int v45; // [rsp+2Ch] [rbp-Ch]
  unsigned int v46; // [rsp+30h] [rbp-8h]
  unsigned int v47; // [rsp+34h] [rbp-4h]

  v43 = a3;
  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v13 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_26:
    v44 = v21;
    goto LABEL_9;
  }
  v47 = a3[2];
  v14 = a3[3] + v47;
  v46 = v14 >> 1;
  if ( (int)(v14 >> 1) <= (int)v47 )
  {
    if ( *(int *)(v13 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v12;
  }
  v45 = v14;
  v42 = v12 + 8LL * a3[1];
  sub_18501CF00(a1, a2: v42, a3: v14 >> 1, a4: v14, a5: v42, a6, a7: v40);
  v19 = v45 & 0xFFFFFFFE;
  v20 = *(unsigned __int16 *)(v42 + (int)(v45 & 0xFFFFFFFE) + 12);
  v21 = 43283768;
  if ( v20 < 0xDC00 )
  {
    v44 = 43283768;
    goto LABEL_9;
  }
  if ( v20 >= 0xE000 )
    goto LABEL_26;
  v44 = 43283768;
  v22 = v43[1];
  v45 = v46 - 1;
  v42 = v12 + 8 * v22;
  sub_18501CF00(a1: v16, a2: v17, a3: v46 - 1, a4: v19, a5: v42, a6: v18, a7: v40);
  v23 = *(unsigned __int16 *)(v42 + 2 * v45 + 12);
  if ( v23 >= 0xD800 && v23 < 0xDC00 )
  {
    v32 = v45;
    if ( v45 > (int)v47 )
    {
      v33 = v47;
      v34 = v43;
      v43[2] = v45;
      v35 = *(_QWORD *)(v13 + 40);
      v36 = *(_QWORD *)(v13 + 32);
      v37 = v34[1];
      v38 = v12 + 8 * v37;
      if ( v35 + 32 > v36 )
      {
        v42 = v12 + 8 * v37;
        v41 = v37;
        v35 = MEMORY[0x181EAA920](a1: v37, a2: v36, a3: v44, a4: v33);
        v38 = v42;
        v37 = v41;
        v32 = v45;
        v33 = v47;
        v34 = v43;
      }
      else
      {
        *(_QWORD *)(v13 + 40) = v35 + 32;
        *(_DWORD *)v35 = 43283768;
        *(_DWORD *)(v35 + 4) = 0;
        *(_QWORD *)(v35 + 8) = 0;
        *(_QWORD *)(v35 + 16) = 0;
        *(_QWORD *)(v35 + 24) = 0;
      }
      v39 = v34[4] | 0x10;
      *(_DWORD *)(v35 + 16) = v39;
      *(_DWORD *)(v35 + 12) = v32;
      *(_DWORD *)(v35 + 8) = v33;
      *(_DWORD *)(v35 + 4) = v37;
      if ( *(int *)(v13 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v37, a2: v39, a3: v34, a4: v33, a5: v38);
      return v35;
    }
    else
    {
      if ( *(int *)(v13 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v12;
    }
  }
LABEL_9:
  v24 = v46;
  v25 = v43;
  v43[2] = v46;
  result = *(_QWORD *)(v13 + 40);
  v26 = *(_QWORD *)(v13 + 32);
  v27 = v25[1];
  v28 = v12 + 8 * v27;
  v29 = result + 32;
  if ( result + 32 > v26 )
    return sub_18501C4C7(a1: v29, a2: v28, a3: (_DWORD)v25, a4: v26, a5: v21, a6: v18, a7, a8, a9, a10, a11, a12);
  *(_QWORD *)(v13 + 40) = v29;
  *(_DWORD *)result = 43283768;
  *(_DWORD *)(result + 4) = 0;
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_QWORD *)(result + 24) = 0;
  v30 = v47;
  v31 = v25[4] | 0x10;
  *(_DWORD *)(result + 16) = v31;
  *(_DWORD *)(result + 12) = v24;
  *(_DWORD *)(result + 8) = v30;
  *(_DWORD *)(result + 4) = v27;
  if ( *(int *)(v13 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v31, a2: v28);
  return result;
}
