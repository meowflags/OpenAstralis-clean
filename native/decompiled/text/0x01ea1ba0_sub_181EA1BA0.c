// sub_181EA1BA0
// rva 0x01ea1ba0  size 614  section .text  group text
// window base 0x181ea1ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_181EA1BA0(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  unsigned int v16; // ebx
  unsigned __int64 j; // rsi
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  __int64 v20; // rcx
  unsigned __int64 i; // rax
  __int64 v22; // rbp
  int v23; // eax
  int v24; // r8d
  int k; // ecx
  _BYTE v28[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]
  unsigned __int64 *v30; // [rsp+30h] [rbp-28h]
  int v31; // [rsp+3Ch] [rbp-1Ch]
  _BYTE *v32; // [rsp+40h] [rbp-18h]
  unsigned __int64 v33; // [rsp+48h] [rbp-10h]
  unsigned int v34; // [rsp+54h] [rbp-4h]

  v34 = a5;
  v33 = a6;
  v32 = v28;
  v28[0] = 0;
  v8 = *(unsigned int *)(a3 + 32);
  if ( a6 < 0x20000 )
  {
    v31 = *(_DWORD *)(a3 + 32);
    v12 = *(_QWORD *)(v7 + 40);
    if ( v12 + v33 > *(_QWORD *)(v7 + 32) )
    {
      return (char *)sub_181EA1220(a1, a2: (__int64)v28, a3, a4: a3, a5, a6: v33);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v12 + v33;
      if ( v6 + 40462360 == a3 )
      {
        v18 = v34;
        if ( a3 == v6 )
          JUMPOUT(0x303D2BD2DLL);
        *(_QWORD *)v12 = a3 - v6;
        *(_DWORD *)(v12 + 8) = v18;
        *(_QWORD *)(v12 + 16) = 0;
        return (char *)v12;
      }
      else
      {
        v13 = (v31 >> 8) & 0xFFF;
        v14 = (((unsigned __int64)v34 << v31) + v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v15 = v14 - 16;
        if ( a1 == v6 )
        {
          v19 = v34;
          v20 = a3 - v6;
          if ( a3 != v6 )
            v20 = a3;
          *(_QWORD *)v12 = v20 - v6;
          *(_DWORD *)(v12 + 8) = v19;
          *(_DWORD *)(v12 + 12) = 0;
          if ( v15 >= 0x800 )
          {
            memset((void *)(v12 + 16), 0, v14 - 16);
          }
          else
          {
            for ( i = 16; v14 > i; i += 8LL )
              *(_QWORD *)(v12 + i) = 0;
          }
          return (char *)v12;
        }
        else
        {
          v16 = v34;
          if ( a3 == v6 )
            JUMPOUT(0x303D2BC9CLL);
          *(_QWORD *)v12 = a3 - v6;
          *(_DWORD *)(v12 + 8) = v16;
          *(_DWORD *)(v12 + 12) = 0;
          if ( v15 >= 0x800 )
          {
            v22 = a1;
            memset((void *)(v12 + 16), 0, v14 - 16);
          }
          else
          {
            for ( j = 16; v14 > j; j += 8LL )
              *(_QWORD *)(v12 + j) = 0;
            v22 = a1;
          }
          v23 = *(_DWORD *)(v22 + 8);
          v24 = v16 + v13 - v23;
          for ( k = 0; v23 > k; ++k )
            *(_BYTE *)(v12 + k + v24) = *(_BYTE *)(v22 + k + 12);
          return (char *)v12;
        }
      }
    }
  }
  else
  {
    v31 = *(_DWORD *)(a3 + 32);
    v9 = (unsigned __int64 *)sub_181E99940(a1, a2, a3: v6 + 376655336, a4: v8, a5: a6);
    v10 = *v9;
    v30 = v9;
    v29 = v10;
    return sub_181EA1480(a1: v9, a2: 1, a3, a4: a1, a5: v34, a6: v33);
  }
}
