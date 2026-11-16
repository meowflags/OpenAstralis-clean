// sub_4F3CCC0
// rva 0x04f3ccc0  size 669  section .text  group text
// window base 0x184f3ccc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F3CCC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  signed __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdi
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // r10
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbp
  signed __int64 v24; // rcx
  __int64 v25; // rax
  signed __int64 v26; // rcx
  __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+8h] [rbp-30h]
  signed __int64 v29; // [rsp+10h] [rbp-28h]
  unsigned int v30; // [rsp+1Ch] [rbp-1Ch]
  unsigned __int64 v31; // [rsp+20h] [rbp-18h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  unsigned int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v29 = a3;
  v34 = a5;
  v33 = a6;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_36;
  sub_632A360(a1: v6 + 376643464, a2, a3: a5, a4, a5: a6, a6: *(unsigned int *)(a3 + 8));
  v10 = v29;
  v11 = *(unsigned int *)(v29 + 4);
  v12 = v6 + 8 * v11;
  v13 = v33;
  v14 = v33 - v34;
  if ( *(_BYTE *)(v29 + 12) != 0 )
  {
    result = sub_5021B40(a1: v8, a2: v9, a3: v6 + 8 * v11, a4: v12, a5: v34, a6: v14);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
    return result;
  }
  if ( v33 != v34 )
  {
    if ( (_DWORD)v11 == 0 )
    {
LABEL_37:
      sub_2771080(a1: v8, a2: v9, a3: v10, a4: v12, a5: v34);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_4F3CF60();
    }
    v16 = v34;
    v28 = v6 + 8 * v11;
    v32 = v33 - v34;
    if ( (v34 & 0x80000000) == 0 && (v14 & 0x80000000) == 0 )
    {
      v17 = *(_DWORD *)(v6 + 8 * v11 + 8);
      if ( v34 <= v17 )
      {
        v18 = *(_QWORD *)(v7 + 40);
        v9 = v14;
        v19 = (v14 + 19LL) & 0x1FFFFFFF8LL;
        if ( v19 >= 0x20000 || (v20 = v18 + v19) > *(_QWORD *)(v7 + 32) )
        {
          v31 = v14;
          v30 = v17;
          v18 = sub_1EAA840(a1: v18, a2: v14, a3: 34082368, a4: v12, a5: v14);
          v9 = v31;
          v17 = v30;
          v14 = v32;
          v12 = v28;
          v13 = v33;
          v16 = v34;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v20;
          *(_QWORD *)v18 = 34082368;
          *(_DWORD *)(v18 + 8) = v14;
        }
        v21 = v17 - v16;
        if ( (int)v14 < v21 )
          JUMPOUT(0x309E52DCBLL);
        v10 = v21;
        if ( v9 < v21 )
          JUMPOUT(0x309E52DD8LL);
        if ( v21 >= 1LL )
        {
          v22 = v12 + (unsigned int)v16 + 12;
          v23 = 0;
          do
          {
            *(_BYTE *)(v18 + 12 + v23) = *(_BYTE *)(v22 + v23);
            ++v23;
          }
          while ( v23 <= v21 - 1LL );
        }
        v24 = v9 - v21;
        if ( v24 >= 2048 )
        {
          memset((void *)(v18 + v21 + 12), 0, v24);
        }
        else if ( (__int64)v9 > v21 )
        {
          v25 = v18 + v21 + 12;
          v26 = v24 - 1;
          v10 = 0;
          do
            *(_BYTE *)(v25 + v10++) = 0;
          while ( v10 <= v26 );
        }
        result = *(_QWORD *)(v7 + 40);
        v12 = result + 24;
        if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v7 + 32) )
        {
          v28 = v18;
          result = sub_1EAA920(a1: v18, a2: v9, a3: 34082680, a4: v12, a5: v16, a6: v13);
          v18 = v28;
          v16 = v34;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v12;
          *(_DWORD *)result = 34082680;
          *(_DWORD *)(result + 4) = 0;
          *(_QWORD *)(result + 8) = 0;
          *(_QWORD *)(result + 16) = 0;
        }
        v8 = (unsigned __int64)(v18 - v6) >> 3;
        *(_DWORD *)(result + 4) = v8;
        goto LABEL_20;
      }
    }
    sub_579B920(a1: v8, a2: v9, a3: v12);
LABEL_36:
    sub_1EB84E0();
    goto LABEL_37;
  }
  v16 = v34;
  result = v6 + 373281248;
LABEL_20:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v8, a2: v9, a3: v10, a4: v12, a5: v16);
  return result;
}
